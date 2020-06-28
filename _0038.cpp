#include<iostream>
#include<string>
using namespace std;
main()
{
	int n;
	cin>>n;
	string a[n],t;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		if(i==0)
		{
			a[0]=t;
			continue;
		}
		a[i]=t;
		for(int j=i;j>=1&&a[j]<=a[j-1];j--)
		{
			t=a[j];
			a[j]=a[j-1];
			a[j-1]=t; 
		}
	}
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			cout<<a[i]<<endl;
			t=a[i];
			continue;
		}
		if(a[i]!=t)
			cout<<a[i]<<endl;
		t=a[i];
	}
}
