#include<bits/stdc++.h>
using namespace std;
int Reverse(int num)
{
    int num1 = 0;
    while(num>0)
    {
        num1 = num1*10 + (num%10);
        num = num/10;
    }
    return num1;
}
int main()
{
    int num1,num2,t;
    cin>>t;
    for(int i=0;i<=t-1;i++)
    {
        cin>>num1>>num2;
        cout<<Reverse(Reverse(num1)+Reverse(num2))<<"\n";;
    }
 
}
