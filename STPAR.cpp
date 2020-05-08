#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    while(1)
    {
        stack <int> s;
        queue <int> q;
        int n,flag = 1,inp;
        cin>>n;
        if(n==0)
            break;
        for(int i=0;i<n;i++)
        {
            cin>>inp;
            q.push(inp);
        }
        for(int i=1;i<=n;i++)
        {
            while(q.front() != i)
            {
                if((s.empty()==0) && s.top() == i)
                {
                    s.pop();
                    break;
                }
                else
                if(s.empty() == 0 && s.top() < q.front())
                {
                        flag = 0;
                        break;
                }
                else
                {
                    s.push(q.front());
                    q.pop();
                }
            }
            if(i == q.front())
                q.pop();
            if(flag == 0)
                break;
        }
        if(flag == 1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
