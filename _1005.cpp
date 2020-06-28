#include<iostream>
using namespace std;
int qs[2502],arr[2502];
main()
{
	int n,r=0,l=0,maax=0,xx;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		qs[i]=arr[i];
		qs[i]+=qs[i-1];
	}
	for(int i=0;i<n;i++)
		for(int j=i+1;j<=n;j++)
			if(maax<(xx=qs[j]-qs[i]))
				r=j,l=i+1,maax=xx;
	if(maax==0)
		cout<<"Empty sequence";
	else
	{
		for(int i=l;i<=r;i++)
			cout<<arr[i]<<' ';
		cout<<endl<<maax;
	}
}
