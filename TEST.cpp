#include<vector>
#include<iostream>

using namespace std;

int main()
{
    vector <int> num;
    int num1;
    while(num1 != 42)
    {
        cin>>num1;
        num.push_back(num1);
    }
    for(auto i=num.begin();i!=num.end()-1;i++)
        cout<<*i<<endl;
}

