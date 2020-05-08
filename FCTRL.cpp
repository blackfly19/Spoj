#include<bits/stdc++.h>
using namespace std;
int fact1(int num)
{
    int cnt=0;
    while(num >= 5)
    {
        cnt += floor(num/5);
        num = num/5;
    }
    return cnt;
}
int main()
{
    int t,num,cnt;
    cin>>t;
    while(t--)
    {
        cin>>num;
        cnt = fact1(num);
        cout<<cnt<<"\n";
        cnt=0;
    }
}
