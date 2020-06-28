#include<stdio.h>
void swap(long int *x,long int *y)
{
	long int t=*x;
	*x=*y;
	*y=t;
}
int main()
{
	long int a,b; 
	scanf("%ld %ld",&a,&b);
	if(a<b)
		swap(&a,&b);
	while(b!=0)
	{
		a=a%b;
		swap(&a,&b);
	}
	printf("%ld",a);
}
