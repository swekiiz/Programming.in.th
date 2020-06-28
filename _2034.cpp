#include<cstdio>
#include<algorithm>
using namespace std;
int h,w,mem[52][52][52][52],a[52][52],qs[52][52];
int dp(int o,int n,int p,int m)
{
	if(o==n&&p==m) return 0;
	if(mem[o][n][p][m]!=-1) return mem[o][n][p][m];
	int x=2e9;
	for(int i=0;i<m-p;i++)
		x=min(x,dp(o,n,p,p+i)+dp(o,n,p+i+1,m)+qs[n][m]-qs[n][p-1]-qs[o-1][m]+qs[o-1][p-1]);
	for(int i=0;i<n-o;i++)
		x=min(x,dp(o,o+i,p,m)+dp(o+i+1,n,p,m)+qs[n][m]-qs[n][p-1]-qs[o-1][m]+qs[o-1][p-1]);
	return mem[o][n][p][m]=x;
}
main()
{
	scanf("%d %d",&h,&w);
	for(int i=0;i<52;i++)
		for(int j=0;j<52;j++)
			for(int k=0;k<52;k++)
				for(int l=0;l<52;l++)
					mem[i][j][k][l]=-1;
	for(int i=1;i<=h;i++)
		for(int j=1;j<=w;j++)
		{
			scanf("%d",&a[i][j]);
			qs[i][j]+=a[i][j]+qs[i-1][j]+qs[i][j-1]-qs[i-1][j-1];
		}
	printf("%d",dp(1,h,1,w));
}
