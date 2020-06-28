#include<iostream>
#include<vector>
using namespace std;
int k,n,a[21],r,now,te;
vector<int> mvc;
main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++) 
	{
		cin>>r;
		mvc.push_back(r);
	}
	for(int i=0;i<n;i++)
	{
		cin>>te;
		for(int j=1;j<=te;j++)
		{
			now++;
			if(now==mvc.size()) now=0;
		}
		a[i%k]+=mvc[now];
		vector<int>::iterator it=mvc.begin();
		for(int i=0;i<now;i++) it++;
		mvc.erase(it);
		if(now==mvc.size()) now=0;
	}
	for(int i=0;i<k;i++) cout<<a[i]<<endl;
}
