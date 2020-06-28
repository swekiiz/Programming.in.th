#include<iostream>
int a,n,r[5],c[5],_;
main()
{
	std::cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<5;j++)
		{
			std::cin>>_;
			r[j]+=_;
		}
	a+=r[0]+r[1]+r[2]/2;
	c[3]+=r[1];
	if(r[2]%2==1) a++,c[2]=1;
	if(c[3]>=r[3]) c[3]-=r[3];
	else 
	{
		r[3]-=c[3],c[3]=0;
		if(r[3]>=2&&c[2]==1) r[3]-=2,c[2]--;
		else if(r[3]==1&&c[2]==1) r[3]--,c[2]--,c[3]++;
		else if(r[3]%4==0) a+=r[3]/4;
		else a+=r[3]/4+1,c[3]+=4-r[3]%4;
	}
	if(c[3]*2<r[4])
	{
		r[4]-=c[3]*2,c[3]=0;
		if(c[2]*4<r[4]) r[4]-=c[2]*4,c[2]=0;
		if(r[4]%8==0) a+=r[4]/8;
		else a+=r[4]/8+1;
	}
	std::cout<<a;
} 
















