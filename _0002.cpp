#include"stdio.h"
main()
{
	int a,b[1000],c,d,e;
	scanf("%d",&c);
	for(a=0;a<c;a++)
	{
		scanf("%d",&b[a]);
	}
	d=b[0];
	for(a=0;a<c;a++)
	{
		if(d>b[a])
		{
			d=b[a];
		}
	}
	e=b[0];
	for(a=0;a<c;a++)
	{
		if(e<b[a])
		{
			e=b[a];
		}
	}
	printf("%d\n%d",d,e);
	return 0;
}
