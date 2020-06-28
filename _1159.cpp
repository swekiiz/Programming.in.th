#include<cstdio>
struct time
{
	int d,mi;
	bool operator <(const time &ww)const
	{
		if(d!=ww.d) return d<ww.d;
		return mi<ww.mi;
	}
};
int a[1001],b[1001],m,n;
time mem[1001][1001];
bool ch[1001][1001];
time dp(int y,int x)
{
	if(x==-1||y==-1)
	{
		time zz;
		zz.d=2e9,zz.mi=2e9;
		return zz;
	}
	if(y==0&&x==0)
	{
		time zz;
		zz.d=0,zz.mi=0;
		return mem[y][x]=zz;
	}
	if(ch[y][x]) return mem[y][x];
	ch[y][x]=true;
	time yy,xx;
	yy=dp(y-1,x);
	if(yy.mi+b[y]>m) yy.d++,yy.mi=b[y];
	else yy.mi+=b[y];
	xx=dp(y,x-1);
	if(xx.mi+a[x]>m) xx.d++,xx.mi=a[x];
	else xx.mi+=a[x];
	return mem[y][x]=xx<yy ? xx:yy; 
}
main()
{
	scanf("%d %d",&m,&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
		scanf("%d",&b[i]);
	time t=dp(n,n);
	printf("%d\n%d",t.d+1,t.mi);
}
