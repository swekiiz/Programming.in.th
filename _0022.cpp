#include<stdio.h>
main()
{
	int n,f,t,e=1;
	scanf("%d",&n);
	if(n%2==1)
		t=n;
	else
		t=n-1;
	for(int i=0,a=t/2,b=t/2;i<n;i++)
	{
		for(int j=0;j<t;j++)
		{
			if(j==a||j==b)
				printf("*");
			else
				printf("-");
		}
		puts("");
		if(n%2==0)
		{
			if(i==n/2-1)
				e=-1;
			if(i!=n/2-1)
				a+=e,b-=e;
		}
		else
		{
			if(i==n/2)
				e=-1;
			a+=e,b-=e;
		}
	}
}
