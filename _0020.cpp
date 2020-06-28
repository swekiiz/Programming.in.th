#include<stdio.h>
main()
{
	int a[]={0,0,0,0,0},z,mx,no;
	for(int i=0;i<20;i++)
	{
		scanf("%d",&z);
		if(i<=3)
			a[0]+=z;
		else if(i<=7)
			a[1]+=z;
		else if(i<=11)
			a[2]+=z;
		else if(i<=15)
			a[3]+=z;
		else
			a[4]+=z;
	}
	mx=a[0],no=0;
	if(a[1]>mx)
		mx=a[1],no=1;
	if(a[2]>mx)
		mx=a[2],no=2;
	if(a[3]>mx)
		mx=a[3],no=3;
	if(a[4]>mx)
		mx=a[4],no=4;
	printf("%d %d",no+1,mx);
}
