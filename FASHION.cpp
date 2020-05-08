#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num,sum=0;
        cin>>num;
        int *men = new int[num];
        int *women = new int[num];
        for(int i=0;i<=num-1;i++)
            cin>>men[i];
        for(int i=0;i<=num-1;i++)
            cin>>women[i];
        sort(men,men+num);
        sort(women,women+num);
        for(int i=0;i<=num-1;i++)
            sum = sum + men[i]*women[i];
        cout<<sum<<"\n";
    }
}
