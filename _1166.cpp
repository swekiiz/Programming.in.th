#include<iostream>
#include<string>
#include<cstring>
using namespace std;
bool py[40][40],ch[40][40];
int mem[40][40],n,m,mx;
int dp(int y,int x)
{
	int c=0;
	py[y][x]=true;
	if(ch[y][x]||y==0||x==0||y==n+1||x==m+1) return 0;
	if(mem[y][x]!=-1) return mem[y][x];
	if(!py[y-1][x]) c+=dp(y-1,x);
	if(!py[y+1][x]) c+=dp(y+1,x);
	if(!py[y][x-1]) c+=dp(y,x-1);
	if(!py[y][x+1]) c+=dp(y,x+1);
	return mem[y][x]=c+1;
}
main()
{
	memset(mem,-1,sizeof(mem));
	cin>>n>>m;
	string s;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		for(int j=0;j<m;j++)
		{
			if(s[j]=='#')
			{
				ch[i][j+1]=true;
				ch[i][j+2]=true;
				ch[i-1][j+1]=true;
				ch[i+1][j+1]=true;
				ch[i][j]=true;
			}
		}
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(!ch[i][j]) mx=(mx>dp(i,j)) ? mx:dp(i,j);
	cout<<mx;
}
