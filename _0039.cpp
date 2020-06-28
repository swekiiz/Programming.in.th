#include<cstdio>
int n,a[9],cheak[9],h[9];
void permu(int c)
{
	if(c==n)
	{
		for(int i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		puts("");
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(cheak[i]==0)
		{
			if(!(c==0&&h[i]==1))
			{
				cheak[i]=1;
				a[c]=i;
				permu(c+1);
				cheak[i]=0;
			}
		}
	}
}
main()
{
	int r,q;
	scanf("%d",&n);
	scanf("%d",&r);
	for(int i=0;i<r;i++)
	{
		scanf("%d",&q);
		h[q]=1;
	}
	permu(0);
}
