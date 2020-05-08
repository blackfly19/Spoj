#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int x,y;
    	cin>>x>>y;
    	if(x == y)
    	{
    		if(x%2==0)
    			cout<<x*2;
    		else
    			cout<<x*2-1;
    	}
    	else
    	if(y == x-2)
    	{
    		if(x%2==0)
    			cout<<x*2-2;
    		else
    			cout<<x*2-3;
    	}
    	else
    		cout<<"No Number";
    	cout<<"\n";
    }
} 
