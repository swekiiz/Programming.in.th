#include<iostream>
using namespace  std;
main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(c-b>b-a)
		cout<<c-b-1;
	else	
		cout<<b-a-1;
}
