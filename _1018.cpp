#include<iostream>
#include<string>
using namespace std;
main()
{
	int x=0,y=0,n,a,tis=1,tid[]={0,1,2,3},b=0;
	cin>>n;
	string t;
	for(int i=0;i<n;i++)
	{
		cin>>t>>a;
		if(t=="RT")
			tis++;
		if(t=="BW")
			tis+=2;
		if(t=="LT")
			tis+=3;
		if(tid[tis%4]==0)
			y+=a;
		else if(tid[tis%4]==1)
			x+=a;
		else if(tid[tis%4]==2)
			y-=a;
		else if(tid[tis%4]==3)
			x-=a;
		if(x>=50000||x<=-50000||y>=50000||y<=-50000)
			b=1;
	}
	if(b==1)
		cout<<"DEAD";
	else
	{
		cout<<x<<' '<<y<<endl;
		if(tid[tis%4]==0)
			cout<<"N";
		else if(tid[tis%4]==1)
			cout<<"E";
		else if(tid[tis%4]==2)
			cout<<"S";
		else if(tid[tis%4]==3)
			cout<<"W";
	}
}
