
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int num;
    cin>>num;
    if(num>=0 && floor(log2(num)) == ceil(log2(num)))
        cout<<"TAK";
    else
        cout<<"NIE";
}
