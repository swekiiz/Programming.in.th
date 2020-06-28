#include<iostream>
using namespace std;
int a[11],n,pk[2][11],p=1,k=0,mmin=0,ch=0;
bool first=0,fff=0;
void twobit(int c)
{
	if(c==n)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]==1)
			{
				p=p*pk[0][i];
				k=k+pk[1][i];
				fff=1;
			}
		}
		if(fff==0)
		{
			p=1,k=0;
			return;
		}
		if(first==0)
		{
			first=1;
			if(p-k>=0)
				mmin=p-k;
			else
				mmin=k-p;
		}
		else
		{
			if(p-k>=0)
				ch=p-k;
			else
				ch=k-p;
			if(mmin>ch)
			{
				mmin=ch;
			}
		}
		p=1,k=0;
		return;
	}
	a[c]=0;
	twobit(c+1);
	a[c]=1;
	twobit(c+1);
}
main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>pk[0][i]>>pk[1][i];
	}
	twobit(0);
	cout<<mmin;
}
