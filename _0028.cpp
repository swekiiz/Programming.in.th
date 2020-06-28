#include<iostream>
#include<string>
using namespace std;
int ar[4][4],p[4]={0},d[4]={0},y[4]={0};
string na[4];
void g(int j)
{
	string t=na[j];
	na[j]=na[j-1];
	na[j-1]=t;
	int ti=p[j],td=d[j],ty=y[j];
	p[j]=p[j-1],d[j]=d[j-1],y[j]=y[j-1];
	p[j-1]=ti,d[j-1]=td,y[j-1]=ty;
}
main()
{
	cin>>na[0];
	cin>>na[1];
	cin>>na[2];
	cin>>na[3];
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			cin>>ar[i][j];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(j>i)
			{
				if(ar[i][j]>ar[j][i])
					p[i]+=3;
				else if(ar[i][j]<ar[j][i])
					p[j]+=3;
				else
					p[i]++,p[j]++;
			}
			d[j]+=ar[i][j];
			y[i]+=ar[i][j];
		}
	}
	for(int i=1;i<4;i++)
		for(int j=i;j>=1&&p[j]>=p[j-1];j--)
		{
			if(p[j]==p[j-1])
			{
				if(y[j]-d[j]>y[j-1]-d[j-1]) g(j);
				else if(y[j]-d[j]==y[j-1]-d[j-1])
				{
					if(y[j]>y[j-1]) 
						g(j);
				}
			}
			else g(j);
		}
	for(int i=0;i<4;i++)
		cout<<na[i]<<' '<<p[i]<<endl;
}
