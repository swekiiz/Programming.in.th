#include<iostream>
#include<algorithm>
using namespace std;
int n,qs[1002],mi,mx,mite=3e9,a,b;
main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>qs[i];
		if(i!=0) qs[i]+=qs[i-1];
	}
	for(int i=1;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
			mi=3e9,mx=-3e9;
			mi=min(mi,qs[i-1]);
			mi=min(mi,qs[j-1]-qs[i-1]);
			mi=min(mi,qs[n-1]-qs[j-1]);
			mx=max(mx,qs[i-1]);
			mx=max(mx,qs[j-1]-qs[i-1]);
			mx=max(mx,qs[n-1]-qs[j-1]);
			if(mite>mx-mi)
			{
				mite=mx-mi;
				a=i,b=j;
			}
		}
	cout<<a+1<<' '<<b+1;
}
