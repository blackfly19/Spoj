#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[200],num,arr_size;
        arr[0] = 1;
        arr_size = 1;
        cin>>num;
        for(int i=2;i<=num;i++)
        {
            int j=0,carry=0,prod;
            for(j=0;j<arr_size;j++)
            {
                prod = arr[j]*i+carry;
                arr[j]=prod%10;
                carry = prod/10;
            }
            while(carry)
            {
                arr[arr_size] = carry%10;
                carry = carry/10;
                arr_size++;
            }
        }
        for(int i=arr_size-1;i>=0;i--)
            cout<<arr[i];
        cout<<"\n";
    }
}
