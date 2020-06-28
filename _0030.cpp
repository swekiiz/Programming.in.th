#include<stdio.h>
main()
{
	char ch;
	int s,g,p=0;
	scanf("%c",&ch);
	s=(ch-'0');
	g=(ch-'0');
	while(ch!='\n')
	{
		p++;
		scanf("%c",&ch);
		if(ch!='\n')
		{
			s+=(ch-'0');
			if(p%2==0)
				g+=(ch-'0');
			else
				g-=(ch-'0');
		}
	}
	if(p%2==0)
		g*=-1;
	while(g>=11)
		g-=11;
	while(g<0)
		g+=11;
	printf("%d %d",s%3,g);
}
