#include"stdio.h"
main()
{
	int i,a;
	char d[16];
	gets(d);
	printf(".");
	for(i=0;i<16;i++)
	{
		if(d[i]=='\0')
			break;
		else
		{
			if((i+1)%3==0&&i!=0)
				printf(".*.");
			else
				printf(".#.");
		}
		printf(".");
	}
	printf("\n.");
	for(i=0;i<16;i++)
	{
		if(d[i]=='\0')
			break;
		else
		{
			if((i+1)%3==0&&i!=0)
				printf("*.*");
			else
				printf("#.#");
		}
		printf(".");
	}
	printf("\n#");
	for(i=0;i<16;i++)
	{
		if(d[i]=='\0')
			break;
		else
		{
			a=(i+1)%3;
			switch(a)
			{
				case 0:printf("*.%c.*",d[i]);break;
				case 1:printf(".%c.#",d[i]);break;
				case 2:printf(".%c.",d[i]);break;
			}
		}
	}
	if(a==2)
		printf("#");
	printf("\n.");
	for(i=0;i<16;i++)
	{
		if(d[i]=='\0')
			break;
		else
		{
			if((i+1)%3==0&&i!=0)
				printf("*.*");
			else
				printf("#.#");
		}
		printf(".");
	}
	printf("\n.");
	for(i=0;i<16;i++)
	{
		if(d[i]=='\0')
			break;
		else
		{
			if((i+1)%3==0&&i!=0)
				printf(".*.");
			else
				printf(".#.");
		}
		printf(".");
	}
	return 0;
}