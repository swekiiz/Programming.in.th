#include<iostream>
#include<stack>
#include<string>
using namespace std;
main()
{
	string a;
	stack<int> s;
	int n;
	bool c;
	cin>>n;
	for(int b=0;b<n;b++)
	{
		cin>>a;
		c=1;
		for(int i=0;i<a.size();i++)
		{
			if(a.at(i)=='(')
				s.push(1);
			if(a.at(i)=='{')
				s.push(2);
			if(a.at(i)=='[')
				s.push(3);
			if(a.at(i)==')')
			{
				if(s.empty())
				{
					c=0;
					break;
				}
				else if(s.top()==1)
				{
					s.pop();
				}
				else
				{
					c=0;
					break;
				}
			}
			if(a.at(i)=='}')
			{
				if(s.empty())
				{
					c=0;
					break;
				}
				else if(s.top()==2)
				{
					s.pop();
				}
				else
				{
					c=0;
					break;
				}
			}
			if(a.at(i)==']')
			{
				if(s.empty())
				{
					c=0;
					break;
				}
				else if(s.top()==3)
				{
					s.pop();
				}
				else
				{
					c=0;
					break;
				}
			}
		}
		if(!s.empty()||c==0)
			cout<<"no";
		else
			cout<<"yes";
		a.clear();
		while(!s.empty())
			s.pop();
		if(b!=n-1)
			cout<<endl;
	}
}
