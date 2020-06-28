#include<iostream>
using namespace std;
void so(int r[],int n)
{
	for(int i=1;i<n;i++)
		for(int j=i;j>=1&&r[j]<r[j-1];j--)
		{
			int t=r[j];
			r[j]=r[j-1];
			r[j-1]=t;
		}
}
main()
{
	int a[4];
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	so(a,4);
	cout<<a[0]*a[2];
}
