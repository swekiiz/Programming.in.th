#include"stdio.h"
main()
{
	int i=0,a=1,b=0,c=0,x,y;
	char fg[51];
	scanf("%s",fg);
	while(1)
	{
		if(fg[i]=='\0')
			break;
		else
		{
			switch(fg[i])
			{
				case'A':
				{
					x=a;y=b;
					a=y;b=x;
					break;
				}
				case'B':
				{
					x=b;y=c;
					c=x;b=y;
					break;
				}
				case'C':
				{
					x=a;y=c;
					a=y;c=x;
					break;
				}
			}
		}
		x=0;y=0;
		i++;
	}
	if(a==1) printf("1");
	if(b==1) printf("2");
	if(c==1) printf("3");
	return 0;
}
