#include<cstdio>
#include<cstring>
#define maax(a,b) a>b ? a:b
int n,mem[20000][4][4][4][4],s[100002];
int sc(int a,int b,int c)
{
	int cc=0;
	for(int i=1;i<=3;i++)
		if(a==i||b==i||c==i)
			cc++;
	return cc;
}
int dp(int l,int a,int b,int c,int d)
{
	if(mem[l][a][b][c][d]!=-1) return mem[l][a][b][c][d];
	int p1=sc(a,b,s[l]),p2=sc(c,d,s[l]);
	if(l>=n) return 0;
	return mem[l][a][b][c][d]=maax(dp(l+1,b,s[l],c,d)+p1,dp(l+1,a,b,d,s[l])+p2);
}
main()
{
	char c;
	memset(mem,-1,sizeof(mem));
	scanf("%d ",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%c",&c);
		if(c=='M') s[i]=1;
		if(c=='F') s[i]=2;
		if(c=='B') s[i]=3;
	}
	printf("%d",dp(0,0,0,0,0));
}
