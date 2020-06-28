#include<stdio.h>
main()
{
	int n,d;
	long double fo;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&d);
		fo=1;
		for(int j=0;j<d;j++)
		{
			fo=fo*2.0;
		}
		printf("%.0Lf\n",fo);
	}
}
