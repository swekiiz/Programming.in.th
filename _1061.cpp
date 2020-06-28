#include<iostream>
using namespace std;
int n,arr[21][21],ch[21][21],maax=0;
void w(int y,int x)
{
	if(y-1>=0&&arr[y-1][x]!=100&&ch[y-1][x]!=1&&arr[y][x]<arr[y-1][x])
	{
		ch[y][x]=1;
		w(y-1,x);
		ch[y][y]=0;
	}
	if(y+1<n&&arr[y+1][x]!=100&&ch[y+1][x]!=1&&arr[y][x]<arr[y+1][x])
	{
		ch[y][x]=1;
		w(y+1,x);
		ch[y][y]=0;
	}
	if(x-1>=0&&arr[y][x-1]!=100&&ch[y][x-1]!=1&&arr[y][x]<arr[y][x-1])
	{
		ch[y][x]=1;
		w(y,x-1);
		ch[y][y]=0;
	}
	if(x+1<n&&arr[y][x+1]!=100&&ch[y][x+1]!=1&&arr[y][x]<arr[y][x+1])
	{
		ch[y][x]=1;
		w(y,x+1);
		ch[y][y]=0;
	}
	if(maax<arr[y][x])
		maax=arr[y][x];
}
main()
{
	int x,y;
	cin>>n>>x>>y;
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			cin>>arr[i][j];
	w(y-1,x-1);
	cout<<maax;
}
