#include<iostream>
#include<vector>
using namespace std;
vector<int> arr[1002];
bool ck[1002],mems[1002];
int n,t,k;
bool dfs(int x)
{
	if(ck[x]==true||mems[x]==true)
	{
		ck[x]=false;
		return false;
	}
	ck[x]=true;
	mems[x]=true;
	if(arr[x].empty()) 
	{
		ck[x]=false;	
		return true;
	}
	for(int i=0;i<arr[x].size();i++)
	{
		if(dfs(arr[x][i])==false||ck[arr[x][i]]==true)
		{
			ck[x]=false;
			return false;
		}
	}
	ck[x]=false;
	return true;
}
main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>k;
		for(int j=0;j<k;j++)
		{
			cin>>t;
			arr[i].push_back(t-1);
		}
	}
	for(int i=0;i<n;i++)
	{
		if(dfs(i)==false) cout<<"YES\n";
		else cout<<"NO\n";
		for(int i=0;i<1002;i++) mems[i]=false;
	}
}
