#include<iostream>
#include<string>
using namespace std;
main()
{
	string a;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(1==(int)((a.at(a.size()-1))-'0')%2)
			cout<<"T";
		else if(a.length()==1&&a.at(0)=='2')
			cout<<"T";
		else
			cout<<"F";
		a.clear();
		if(i!=n-1)
			cout<<endl;
	}
}
