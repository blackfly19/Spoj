#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    while(1)
    {
        long double num,euler = 0.57721566490153286060651209008240243104215933593992;
        cin>>num;
        if(num == 0.00)
            break;
        num = num+1;
        num = fabs(num-euler);
        num = exp(num)-0.0001;
        num = round(num);
        cout<<num-1<<" card(s)"<<endl;
    }
}
