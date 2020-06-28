#include<iostream>
using namespace std;
long long int f(int a)
{
	long long int s=1;
	for(int i=a;i>=1;i--)
		s*=i;
	return s;
}
long long int fa(int a,int w)
{
	long long int s=1;
	for(int i=a;i>w;i--)
		s*=i;
	return s;
}
main()
{
	int n;
	cin>>n;
	if(n%2==1) n=n+1;
	cout<<fa(n,n-n/2)/f(n/2);
}
