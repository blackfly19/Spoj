#include<iostream>
using namespace std;
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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string num,num1;
    int l,mid,check = 0,k=0,cnt=0;
    cin>>num;
    l = num.length();
    while(num[k] == '0')
        k++;
    if(k > 0)
    {
        rev(num);
        num.resize(l-k);
        rev(num);
        l = num.length();
    }
    num1 = num;
    mid = l/2;
    if(l%2==0)
    {
        for(int i=0;i<mid;i++)
        {
            if(num[mid-i-1] == num[mid+i])
                cnt++;
            else
            if(num[mid-i-1]-'0' < num[mid+i]-'0')
            {
                check = 1;
                break;
            }
            else
                break;
        }
        if(cnt == mid)
            check = 1;
        for(int i=0;i<mid;i++)
            num[mid+i] = num[mid-i-1];
        if(check == 1)
        {
            int i=0;
            while(num[mid-i-1] == '9')
            {
                if((num1[0]-'0') > (num1[l-1]-'0'))
                    break;
                num[mid-i-1] = '0';
                num[mid+i] = '0';
                i++;
            }
            if(num[0] == '0')
            {
                num[mid-i]++;
                num.push_back('1');
            }
            else
            {
                num[mid-i-1]++;
                num[mid+i]++;
            }
        }
    }
    else
    {
        for(int i=0;i<=mid;i++)
        {
            if(num[mid-i] == num[mid+i])
                cnt++;
            else
            if(num[mid-i]-'0' < num[mid+i]-'0')
            {
                check = 1;
                break;
            }
            else
                break;
        }
        if(cnt == mid+1)
            check = 1;
        for(int i=0;i<=mid;i++)
            num[mid+i] = num[mid-i];
        if(check == 1)
        {
            int i = 0;
            while(num[mid-i] == '9')
            {
                num[mid-i] = '0';
                num[mid+i] = '0';
                i++;
            }
            if(num[0] == '0')
            {
                num[mid-i+1]++;
                num.push_back('1');
            }
            else
            if(i==0)
                num[mid]++;
            else
            {
                num[mid-i]++;
                num[mid+i]++;
            }
        }
    }
    cout<<num<<"\n";
    }
}
