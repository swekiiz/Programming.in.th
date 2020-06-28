#include<stdio.h>
main()
{
	int h,m,j,y=0;
	scanf("%d",&h);
	int p[h];
	for(int i=0;i<h;i++)
	{
		scanf("%d",&m);
		if(i==0)
			p[0]=m;
		else
		{
			j=0;
			while(j<i)
			{
				if(m<p[j])
				{
					int t=m;
					m=p[j];
					p[j]=t;
				}
				j++;
			}
			p[i]=m;
		}
	}
	while(p[++y]==0);
	if(y!=0)
	{
		int t=p[0];
		p[0]=p[y];
		p[y]=t;
	}
	for(int i=0;i<h;printf("%d",p[i++]));
}
