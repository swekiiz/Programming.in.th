#include<iostream>
using namespace std;
int n,m,arr[111][111],mun[101][101],sm,maxx,tt;
main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) {cin>>arr[i][j];sm+=arr[i][j];}
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>mun[i][j];
	for(int i=1;i<=n;i++)
	{
		tt=sm;
		for(int j=1;j<=m;j++)
		{
			tt+=mun[i-1][j];
			tt+=mun[i+1][j];
			tt-=arr[i][j];
		}
		if(maxx<tt) maxx=tt;
	}
	for(int j=1;j<=m;j++)
	{
		tt=sm;
		for(int i=1;i<=n;i++)
		{
			tt+=mun[i][j-1];
			tt+=mun[i][j+1];
			tt-=arr[i][j];
		}
		if(maxx<tt) maxx=tt;
	}
	cout<<maxx;
}
