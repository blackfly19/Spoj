#include<iostream>
using namespace std;
int main()
{
    int inp,num;
    while(1)
    {
        cin>>inp;
        if(inp == 0)
            break;
        num = (inp*(inp+1)*(2*inp+1))/6;
        cout<<num<<"\n";
    }
}
