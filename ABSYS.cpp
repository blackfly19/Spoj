#include<bits/stdc++.h>
using namespace std;
int rabin_karp(string str,string sub)
{
    int hs = 0,hb = 0,lens,lenb,q=101,fact = 1,i,j,l,d = 256;
    lens = str.length();
    lenb = sub.length();
    for(i=0;i<lenb-1;i++)
        fact = (fact * d)%q;
    for(i=0;i<=lenb-1;i++)
    {
        hs = (d*hs+str[i])%q;
        hb = (d*hb+sub[i])%q;
    }
    for(i=0;i<=lens-lenb;i++)
    {
        if(hs == hb)
        {
            for(j=0;j<=lenb-1;j++)
            {
                if(str[i+j]!=sub[j])
                    break;
            }
            if(j == lenb)
                return i+1;
        }
        if(i < lens-lenb)
        {
            hs = (d*(hs-fact*str[i])+str[i+lenb])%q;
 
            if(hs < 0)
                hs = hs + q;
 
        }
    }
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string exp;
        int posm,pos_,pos;
        cin.ignore();
        getline(cin,exp);
        posm = rabin_karp(exp,"machula");
        pos_ = rabin_karp(exp,"+");
        pos = rabin_karp(exp,"=");
        if(posm > pos)
        {
            int i=0,x=0,sum = 0;
            while(exp[i]!='=')
            {
                if(exp[i]>='0' && exp[i]<='9')
                {
                    x = x * 10;
                    x = x + (exp[i]-'0');
                }
                else
                if(exp[i] == '+')
                {
                    sum = sum + x;
                    x = 0;
                }
                i++;
            }
            cout<<sum<<" + "<<x<<" = "<<sum+x<<"\n";
        }
        else
        if(posm > pos_)
        {
            int i=0,x=0,dif = 0;
            while(exp[i]!='+')
            {
                if(exp[i]>='0' && exp[i]<='9')
                {
                    x = x * 10;
                    x = x + (exp[i]-'0');
                }
                i++;
            }
            i = pos;
            dif = x;
            x = 0;
            while(i!=exp.length())
            {
                if(exp[i]>='0' && exp[i]<='9')
                {
                    x = x * 10;
                    x = x + (exp[i]-'0');
                }
                i++;
            }
            cout<<dif<<" + "<<x-dif<<" = "<<x<<"\n";
        }
        else
        if(pos_ > posm)
        {
            int i = pos_-1,x=0,dif;
            while(i!=exp.length())
            {
                if(exp[i]>='0' && exp[i]<='9')
                {
                    x = x * 10;
                    x = x + (exp[i]-'0');
                }
                else
                if(exp[i] == '=')
                {
                    dif = x;
                    x = 0;
                }
                i++;
            }
            cout<<x-dif<<" + "<<dif<<" = "<<x<<"\n";
        }
    }
}
