#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int t,avg=0,Move = 0;
        cin>>t;
        if(t == -1)
            break;
        int *arr = new int(t);
        for(int i=0;i<=t-1;i++)
        {
            cin>>arr[i];
            avg +=arr[i];
        }
        if(avg%t == 0)
        {
            avg = avg/t;
            for(int i=0;i<=t-1;i++)
            {
                if(avg > arr[i])
                    Move = Move + (avg-arr[i]);
            }
        }
        else
            Move = -1;
        cout<<Move<<"\n";
    }
}
