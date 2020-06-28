#include<stdio.h>
main()
{
	int c,n,m,l,k;
	int sum=0;
	bool chk=1;
	scanf("%d %d %d %d %d",&n,&m,&l,&k,&c);
	if(n>=1&&n<=100&&m>=1&&m<=100&&l>=1&&l<=100&&k>=1&&k<=100&&c>=1&&c<=1000)
	{
		n=n*m;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&m);
			if(m<1||m>3000)
			{
				chk=0;
				break;
			}
			sum=sum+m;
		}
		if(chk)
		{
			sum=(l*k*c+sum)/c;
			if((l*k*c+sum)%c==0)
				printf("%d",sum);
			else
				printf("%d",sum+1);
		}
	}
}
