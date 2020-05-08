#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num1,num2,num3;
    while(1)
    {
        cin>>num1>>num2>>num3;
        if(num1 == 0 && num2 == 0 && num3 == 0)
            break;
        if(num3-num2 == num2-num1)
            cout<<"AP "<<num3+(num2-num1)<<"\n";
        else
            cout<<"GP "<<num3*(num3/num2)<<"\n";
    }
}
