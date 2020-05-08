#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int num,sum = 0;
        cin>>num;
        long long int *arr = new long long int[num];
        for(int i=0;i<num;i++)
        {
            cin>>arr[i];
            sum = (sum + arr[i])%num;
        }
        if(sum % num == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
