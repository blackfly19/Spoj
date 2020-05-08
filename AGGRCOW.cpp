#include<iostream>
#include<algorithm>
using namespace std;
int Search(int arr[],int num,int n)
{
    int lastpos=0,cnt = 1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]-arr[lastpos] >= num)
        {
            lastpos = i;
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,top,bottom,mid,ans=0;
        cin>>n>>c;
        int *arr = new int[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        top = 0;
        bottom = arr[n-1]-arr[0];
        while(bottom > top)
        {
            mid = (top+bottom)/2;
            if(Search(arr,mid,n) >= c)
            {
                if(mid > ans)
                    ans = mid;
                top = mid+1;
            }
            else
                bottom = mid;
        }
        cout<<ans<<endl;
    }
}
