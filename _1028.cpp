#include<iostream>
using namespace std;
int arr[27];
main()
{
	char ch;
	while(true)
	{
		cin>>ch;
		if(ch=='!') break;
		if(ch=='=')
		{
			int iemp;
			char cemp;
			cin>>cemp>>iemp;
			arr[(int)cemp-65]=iemp;
		}
		if(ch=='#')
		{
			char cemp;
			cin>>cemp;
			cout<<arr[(int)cemp-65]<<endl;
		}
		if(ch=='+')
		{
			char c,cc;
			cin>>c>>cc;
			arr[(int)c-65]+=arr[(int)cc-65];
		}
		if(ch=='-')
		{
			char c,cc;
			cin>>c>>cc;
			arr[(int)c-65]-=arr[(int)cc-65];
		}
		if(ch=='*')
		{
			char c,cc;
			cin>>c>>cc;
			arr[(int)c-65]*=arr[(int)cc-65];
		}
		if(ch=='/')
		{
			char c,cc;
			cin>>c>>cc;
			arr[(int)c-65]/=arr[(int)cc-65];
		}
	}
	cout<<'!';
}
