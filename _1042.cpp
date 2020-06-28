#include<iostream>
using namespace std;
struct f {int x,y,r;}arr[10001];
int n,m,xx,yy,c,r,mx,co;
main()
{
	cin>>n>>m>>c;
	for(int i=0;i<c;i++)
	{
		cin>>xx>>yy>>r;
		arr[i]=(f){xx,yy,r};
	}
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<c;j++)
			if(arr[j].x+arr[j].r>=i&&arr[j].x-arr[j].r<=i)
				co++;
		if(co>mx) mx=co;
		co=0;
	}
	for(int i=0;i<m+1;i++)
	{
		for(int j=0;j<c;j++)
			if(arr[j].y+arr[j].r>=i&&arr[j].y-arr[j].r<=i)
				co++;
		if(co>mx) mx=co;
		co=0;
	}
	cout<<mx;
}
