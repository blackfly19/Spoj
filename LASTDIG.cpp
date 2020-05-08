#include <iostream>
using namespace std;
 
long long Power(long long base,long long exp)
{
    int res = 1;
    while(exp>0)
    {
        if(exp%2)
            res = (res * base)%10;
        base = (base * base)%10;
        exp = exp/2;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int base,power;
        cin>> base>>power;
        if(power == 6 || power == 5)
            cout<<power<<"\n";
        else
            cout<<Power(base,power)<<"\n";
    }
}
