#include<iostream>
#include<queue>
#define mx(a,b) (a>b) ? a:b
using namespace std;
int arr[50001];
bool x[50001];
main()
{
	queue<int> Q;
	int n,m=1,d=2,a=1,co;
	cin>>n;
	for(int i=0;i<n;i++) 
	{
		cin>>arr[i];
		m=mx(m,arr[i]);
	}
	while(d<=m)
	{
		co=0;
		for(int i=0;i<n;i++) if(arr[i]%d==0) x[i]=true,co++;
		if(co>=2)
		{
			Q.push(d);
			for(int i=0;i<n;i++) if(x[i]) arr[i]/=d;
		}
		else d++;
		for(int i=0;i<n;i++) x[i]=false;
	}
	while(!Q.empty())
	{
		a*=Q.front();
		Q.pop();
	}
	for(int i=0;i<n;i++) a*=arr[i];
	cout<<a;
}



























