#include<iostream>
#include<stack>
using namespace std;
stack<char> S;
int a,l;
char t;
main()
{
	cin>>a;
	for(int i=0;i<a;++i)
	{
		cin>>t;
		if(S.empty()) S.push(t);
		else
		{
			if(S.top()==t) S.pop();
			else S.push(t);
		}
	}
	cout<<(l=S.size())<<endl;
	if(!S.empty())
	for(int i=0;i<l;i++)
	{
		cout<<S.top();
		S.pop();
	}else cout<<"empty";
}
