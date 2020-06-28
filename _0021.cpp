#include<iostream>
#include<string>
using namespace std;
main()
{
	string a,b;
	getline(cin,a);
	for(int i=0;i<a.size();i++)
	{
		if(a.at(i)=='a')
		{
			b.push_back('a');
			i+=2;
		}
		else if(a.at(i)=='e')
		{
			b.push_back('e');
			i+=2;
		}
		else if(a.at(i)=='i')
		{
			b.push_back('i');
			i+=2;
		}
		else if(a.at(i)=='o')
		{
			b.push_back('o');
			i+=2;
		}
		else if(a.at(i)=='u')
		{
			b.push_back('u');
			i+=2;
		}
		else
			b.push_back(a.at(i));
	}
	cout<<b;
}
