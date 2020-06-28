#include<stdio.h>
main()
{
	int s=0,y,array[9],a,b;
	bool boo;
	for(int i=0;i<9;scanf("%d",&array[i++]));
	for(int i=0;i<8;i++)
	{
		boo=0;
		for(int j=i+1;j<9;j++)
		{
			y=0;
			while(y<=8)
			{	
				if(y!=i&&y!=j) s+=array[y];
				y++;
			}
			if(s==100)
			{
				a=i;
				b=j;
				boo=1;
				break;
			}
			s=0;
		}
		if(boo==1) break;	
	}
	for(int i=0;i<9;i++)
	{	
		if(i!=a&&i!=b)
			printf("%d\n",array[i]);
	}
}
