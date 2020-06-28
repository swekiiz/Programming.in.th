#include<iostream>
using namespace std;
void countsort(int arr[],int n,int e)
{
	int oarr[n],count[10]={0};
	for(int i=0;i<n;i++)
		count[(arr[i]/e)%10]++;
	for(int i=1;i<10;i++)
		count[i]+=count[i-1];
	for(int i=n-1;i>=0;i--)
	{
		oarr[count[(arr[i]/e)%10]-1]=arr[i];
		count[(arr[i]/e)%10]--;
	}
	for(int i=0;i<n;i++)
		arr[i]=oarr[i];
}
void radixsort(int arr[],int n)
{
	int mx=arr[0];
	for(int i=1;i<n;i++)
		if(arr[i]>mx)
			mx=arr[i];
	for(int e=1;mx/e>0;e*=10)
		countsort(arr,n,e);
}
main()
{
	int n,kn;
	cin>>n>>kn;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	radixsort(arr,n);
	cout<<arr[n-kn];
}
