
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int num,n,sum = 0,cnt=0;
        cin>>num>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n,greater<int>());
        while(sum<num && cnt<n)
        {
            sum = sum + arr[cnt];
            cnt++;
        }
        cout<<"Scenario #"<<j+1<<":\n";
        if(sum < num)
            cout<<"impossible\n\n";
        else
            cout<<cnt<<"\n\n";
    }
}
