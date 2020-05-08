#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int k;
        cin>>k;
        if(k == 1)
            cout<<192<<endl;
        else
            cout<<(192+(k-1)*250)<<endl;
    }
}
