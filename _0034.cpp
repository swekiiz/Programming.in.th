#include<iostream>
using namespace std;
struct fxxk
{
	int pa1;
	int pa2;
};
int b;
int pakobb(int a,fxxk arr[],int p)
{
	int m=1,k=0;
	bool cck=0;
	if(a==0)
	{
		if(b<0)
		{
			m=-1;
			b=b*-1;
			cck=1;
		}
		for(int i=1;i<=b;i++)
		{
			if(b%i==0)
			{
				arr[k].pa1=i*m;
				arr[k++].pa2=0;
			}
		}
		if(cck==1)
		{
			b=b*-1;
		}
	}
	if(a<0)
	{
		m=-1;
		a=a*-1;
	}
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			arr[k].pa1=i*m;
			arr[k++].pa2=a/i;
		}
	}
	if(p==1)
	{
		for(int i=-1;i>=-a;i--)
		{
			if(a%i==0)
			{
				arr[k].pa1=i*m;
				arr[k++].pa2=a/i;
			}
		}
	}
	return k;
}
main()
{
	int a,c;
	fxxk Apa[15],Cpa[30];
	int na=0,nc=0;
	cin>>a>>b>>c;
	if(a==0&&b==0&&c==0)
	{
		cout<<"0 0 0 0";
		return 0;
	}
	na=pakobb(a,Apa,0);
	nc=pakobb(c,Cpa,1);
	for(int i=0;i<na;i++)
	{
		for(int j=0;j<nc;j++)
		{
			if(Apa[i].pa1*Cpa[j].pa2+Apa[i].pa2*Cpa[j].pa1==b)
			{
				cout<<Apa[i].pa1<<' '<<Cpa[j].pa1;
				cout<<' '<<Apa[i].pa2<<' '<<Cpa[j].pa2;
				return 0;
			}
		}
	}
	cout<<"No Solution";
}
