#include <iostream>
#include <stack>
#include <math.h>
#include <cstring>
using namespace std;
 
bool numeric(char);
int operator1(char);
void convert(char []);
bool precedence(int ,int );
 
int main()
{
    char exp[400];
    int t;
    cin>>t;
    for(int i=0;i<=t-1;i++)
   	{
    	cin>>exp;
    	convert(exp);
   	}
    return 0;
}
void convert(char exp[])
{
    stack <char> str;
    int i;
    string str1 = "";
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i] == '(')
            str.push(exp[i]);
        else
        if(!str.empty() && operator1(exp[i]) && str.top() != '(')
        {
            if(operator1(exp[i]) && operator1(str.top()))
            {
                if(precedence(operator1(str.top()),operator1(exp[i])))
                {
                    str1 = str1 + str.top();
                    str.pop();
                }
                str.push(exp[i]);
            }
        }
        else
        if(operator1(exp[i]))
            str.push(exp[i]);
        else
        if(numeric(exp[i]))
            str1 = str1 + exp[i];
        else
        if(exp[i] == ')')
        {
            while(!str.empty() && str.top() != '(')
            {
                str1 = str1 + str.top();
                str.pop();
            }
            str.pop();
        }
    }
    while(!str.empty())
    {
        str1 = str1 + str.top();
        str.pop();
    }
    cout<<str1<<endl;
}
bool precedence(int sign1, int sign2)
{
    if(sign1>sign2)
        return 1;
    else
        return 0;
}
bool numeric(char c)
{
    if((c >='0' && c<='9') || (c >= 'a' && c <='z'))
        return 1;
    else
        return 0;
}
 
int operator1(char c)
{
    if(c == '-')
        return 1;
    else
    if(c == '+')
        return 2;
    else
    if(c == '*')
        return 3;
    else
    if(c == '/')
        return 4;
    else
    if(c == '^')
        return 5;
    else
        return 0;
}
