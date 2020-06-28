#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	if(n==1)
		cout<<"2.000000";
	else if(n%2==0)
		cout<<n<<".000000";
	else if(n==3)
		cout<<"3.732051";
	else
		cout<<n<<".464102";
}
