#include <iostream>
#include<map>
using namespace std;
map <int,long long> dp;
 
long long Sum(long long num)
{
    if(num < 12)
        return num;
    if(dp.count(num))
        return dp[num];
    dp[num] = Sum(num/2)+Sum(num/3)+Sum(num/4);
    return dp[num];
}
int main()
{
    int t=10;
    while(t--)
    {
        long long int num;
        cin>>num;
        cout<<Sum(num)<<"\n";
    }
}
