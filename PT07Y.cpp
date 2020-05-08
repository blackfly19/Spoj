#include <bits/stdc++.h>
using namespace std;
void addEdge(vector <int> adj[],int src,int des)
{
    adj[src].push_back(des);
    adj[des].push_back(src);
}
bool cycleUtil(vector <int> adj[],bool visit[],int u,int parent)
{
    visit[u] = true;
    for(auto it = adj[u].begin();it!=adj[u].end();it++)
    {
        if(visit[*it] == false)
        {
            if(cycleUtil(adj,visit,*it,u))
                return true;
        }
        else
        if(*it != parent)
                return true;
    }
    return false;
}
bool isTree(vector <int> adj[],int v)
{
    bool visit[v];
    memset(visit,false,v);
    if(cycleUtil(adj,visit,1,-1))
               return false;
    for(int i=1;i<v;i++)
        if(visit[i] == false)
            return false;
    return true;
}
int main()
{
    int n,m;
    bool check;
    cin>>n>>m;
    vector <int> adj[n+1];
    for(int i=0;i<m;i++)
    {
        int p1,p2;
        cin>>p1>>p2;
        addEdge(adj,p1,p2);
    }
    check = isTree(adj,n+1);
    if(check == true)
        cout<<"YES";
    else
        cout<<"NO";
}
