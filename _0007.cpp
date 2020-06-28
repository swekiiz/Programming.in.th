#include"stdio.h"
#define pi 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348
main()
{
	int r;
	double a,h;
	scanf("%d",&r);
	a=(r*r)*pi;
	h=(r*r)*2;
	printf("%lf\n",a);
	printf("%lf",h);
	return 0;
}
