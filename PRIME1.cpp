#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int ll,ul;
    int t,flag = 0;
    cin>>t;
    for(int i=0;i<=t-1;i++)
    {
        cin>>ll>>ul;
        if(ll == 1)
            ll++;
        for(int j=ll;j<=ul;j++)
        {
            for(int k=2;k<=sqrt(j);k++)
            {
                if(j%k == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                cout<<j<<endl;
            flag = 0;
        }
    }
}
