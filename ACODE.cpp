#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        string num;
        int sub=0;
        cin>>num;
        if(num == "0")
            break;
        int dp[num.length()+1];
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2;i<=num.length();i++)
        {
            int x = (num[i-2]-'0')*10+(num[i-1]-'0');
            if(num[i-1] == '0')
                sub = dp[i-1];
            else
                sub = 0;
            dp[i] = dp[i-1];
            if(x > 9 && x < 27)
                dp[i] += dp[i-2];
            dp[i] = dp[i]-sub;
        }
        cout<<dp[num.length()]<<"\n";
    }
}
