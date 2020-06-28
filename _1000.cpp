#include<iostream>
using namespace std;
int s,n,p,y;
main()
{
	cin>>s>>n;
	string a[3];
	cin>>a[0];
	for(int i=0;i<n-1;i++)
	{
		cin>>a[1];
		p=0;
		for(int j=0;j<s;j++) if(a[0][j]!=a[1][j]) p++;
		if(p>2&&y==0)
		{
			a[2]=a[0];
			y++;
		}
		a[0]=a[1];
	}
	if(n==1) cout<<a[0];
	else if(y==0) cout<<a[1];
	else cout<<a[2];
}
