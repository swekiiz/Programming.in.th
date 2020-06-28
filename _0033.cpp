#include<iostream>
using namespace std;
main()
{
	int arr[10001]={0};
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr[a]++;
	}
	n=0;
	for(int i=0;i<10001;i++)
	{
		if(n<arr[i])
			n=arr[i];
	}
	for(int i=0;i<10001;i++)
	{
		if(arr[i]==n)
			cout<<i<<' ';
	}
}
