#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
struct xxx
{
	int x;
	int y;
};
float maax=0;
main()
{
	int n;
	cin>>n;
	xxx a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i].x>>a[i].y;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int k=i+2;k<n;k++)
			{
				float f=(float)abs(a[i].x*a[j].y+a[j].x*a[k].y+a[k].x*
					a[i].y-a[i].y*a[j].x-a[j].y*a[k].x-a[k].y*a[i].x)/2;
				if(maax<f)
					maax=f;
			}
		}
	}
	printf("%.3f",maax);
}
