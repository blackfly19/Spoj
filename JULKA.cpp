#include<iostream>
#include<string>
using namespace std;
void divi(string &bignum)
{
    int carry = 0,d,i,j;
    for(i=0,j=0;i < bignum.length();i++,j++)
    {
        d = (((bignum[i]-'0')+(carry*10))/2)+'0';
        if((bignum[i]-'0')%2 != 0)
            carry = 1;
        else
            carry = 0;
        bignum[j] = d;
    }
}
void subtract(string &bignum,string &num)
{
    int d,c=0;
    for(int i=0,j = 0;j <=num.length()-1;i++,j++)
    {
        d = (bignum[i]+'0')-(num[j]+'0');
        if(d<0)
        {
            d = d + 10;
            bignum[i+1] = ((bignum[i+1]-'0')-1)+'0';
        }
        bignum[i] = (d+'0');
    }
}
void rev(string &num)
{
    int l = num.length();
    char c;
    for(int i=0;i<l/2;i++)
    {
        c = num[i];
        num[i] = num[l-i-1];
        num[l-i-1] = c;
    }
}
void detect(string &num)
{
    int i=0,l;
    l = num.length();
    while(num[i]=='0')
        i++;
    rev(num);
    num.resize(l-i);
    for(i=0;i<=num.length()-1;i++)
    {
        if(num[i] == '/')
        {
            num[i++] = '9';
            while(num[i] == '0')
                num[i++] = '9';
            break;
        }
    }
    num[i]--;
    rev(num);
}
int main()
{
    int t = 10;
    while(t--)
    {
        string bignum,bignum1,num;
        cin>>bignum;
        bignum1 = bignum;
        cin>>num;
        divi(bignum);
        divi(num);
        rev(bignum1);
        rev(bignum);
        rev(num);
        subtract(bignum,num);
        subtract(bignum1,bignum);
        rev(bignum1);
        rev(bignum);
        if(bignum != "0" && bignum1 != "0")
        {
        detect(bignum1);
        detect(bignum);
        }
        cout<<bignum1<<"\n";
        cout<<bignum<<"\n";
 
    }
}
