#include"stdio.h"
main()
{
	int x,y,k;
	scanf("%d %d",&x,&y);
	if(x<=1000&&y<=1000&&x>=1&&y>=1)
	{
		if(x>y)
			k=2;
		else
		{
			if(y%x==0)
				k=y/x;
			else
				k=y/x+1;
		}
		printf("%d",k);
	}
	return 0;
}
