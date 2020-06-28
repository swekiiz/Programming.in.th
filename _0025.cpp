#include<iostream>
#include<string>
using namespace std;
main()
{
	string a,b;
	char o;
	cin>>a>>o>>b;
	if(o=='*')
	{
		int l=a.size()+b.size()-2;
		cout<<'1';
		for(int i=0;i<l;i++)
			cout<<'0';
	}
	else if(o=='+')
	{
		if(a.size()>=b.size())
		{
			int k=a.size()-b.size();
			for(int i=0;i<k;i++)
				b.insert(0,"0");
		}
		else
		{
			int k=b.size()-a.size();
			for(int i=0;i<k;i++)
				a.insert(0,"0");
		}
		for(int i=0;i<a.size();i++)
		{
			if(i==0&&a.at(i)=='1'&&b.at(i)=='1')
			{
				a.at(i)='2'; 
				continue;
			}
			if(a.at(i)=='1'||b.at(i)=='1')
				a.at(i)='1';
		}
		cout<<a;
	}
}
