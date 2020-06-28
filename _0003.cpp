#include"stdio.h"
main()
{
	int a,b,c,d,e,f[100][100],g[100][100],sa[100][100];
	scanf("%d",&b);
	scanf("%d",&a);
	for(d=0;d<b;d++)
	{
		for(c=0;c<a;c++)
		{
			scanf("%d",&f[d][c]);
		}
	}
	for(d=0;d<b;d++)
	{
		for(c=0;c<a;c++)
		{
			scanf("%d",&g[d][c]);
		}
	}
	for(d=0;d<b;d++)
	{
		for(c=0;c<a;c++)
		{
			sa[d][c]=f[d][c]+g[d][c];
		}
	}
	for(d=0;d<b;d++)
	{
		for(c=0;c<a;c++)
		{
			printf("%d ",sa[d][c]);
		}
		printf("\n");
	}
	return 0;
}
