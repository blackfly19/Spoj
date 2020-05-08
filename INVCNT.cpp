#include <iostream>
using namespace std;
 
#define For(x) for(int w=0;w<x;w++)
 
long long merge(long long arr[],long long l,long long  m,long long r)
{
    long long sizeL,sizeR,i=0,j=0,k=l;
    sizeL = m - l + 1;
    sizeR = r - m;
    
    long long L[sizeL];
    long long R[sizeR];
    long long cnt = 0;
    
    For(sizeL)
        L[w] = arr[l+w];
    For(sizeR)
        R[w] = arr[m + 1 + w];
 
    while(i < sizeL && j < sizeR)
    {
        if(L[i] <= R[j])
            arr[k++] = L[i++];
        else
        {
            arr[k++] = R[j++];
            cnt = cnt + (sizeL - i);
        }
    }
    while(i < sizeL)
        arr[k++] = L[i++];
    while(j < sizeR)
        arr[k++] = R[j++];
    return cnt;
}
long long mergeSort(long long arr[],long long low,long long high)
{
    long long cnt = 0;
    if(low < high)
    {
        long long mid = (high-low)/2 + low;
 
        
        cnt += mergeSort(arr,low,mid);
        cnt += mergeSort(arr,mid+1,high);
        cnt += merge(arr,low,mid,high);
        
    }
    return cnt;
}
long long int inversionCount(long long A[],long long N)
{
    long long cnt;
    cnt = mergeSort(A,0,N-1);
    return cnt;
}
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long size;
		long long *arr;
		cin>>size;
		arr = new long long[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];
		cout<<inversionCount(arr,size)<<endl;
	}
	return 0;
}
