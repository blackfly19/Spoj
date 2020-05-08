#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cout<<"\n";
    while(t--)
    {
        int ng,nm,k=0,l=0;
        cin>>ng>>nm;
        int g[ng],m[nm];
        for(int i=0;i<ng;i++)
            cin>>g[i];
        for(int i=0;i<nm;i++)
            cin>>m[i];
        sort(g,g+ng);
        sort(m,m+nm);
        while(k < ng && l < nm)
        {
            if(g[k] < m[l])
                k++;
            else
            if(m[l] < g[k])
                l++;
            else
                l++;
        }
        if(l == nm)
            cout<<"Godzilla\n\n";
        else
        if(k == ng)
            cout<<"MechaGodzilla\n\n";
    }
}
