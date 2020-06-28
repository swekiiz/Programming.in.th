#include<iostream>
using namespace std;
main()
{
	int n,k,ch[1001]={0},kill[1001],co=0;
	cin>>n>>k;
	for(int i=2;i<=n;i++)
		if(ch[i]==0)
			for(int j=1;i*j<=n;j++)
				if(ch[i*j]==0)
					kill[co++]=i*j,ch[i*j]=1;
	cout<<kill[k-1];
}
