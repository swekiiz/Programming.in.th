#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int mx=1,k,n,m,ja[10002];
bool ch[10002];
vector<int> arr[10002];
void walk(int c,int now)
{
	if(c==k)
	{
		return;
	}
	for(int i=0;i<arr[now].size();i++)
	{
		if(arr[now][i]>now&&(ch[arr[now][i]]==false||c<ja[arr[now][i]]))
		{
			mx=max(mx,arr[now][i]);
			ch[arr[now][i]]=true;
			ja[arr[now][i]]=c;
			walk(c+1,arr[now][i]);
		}
	}
}
main()
{
	cin>>k>>n>>m;
	for(int i=0;i<m;i++)
	{
		int p1,p2;
		cin>>p1>>p2;
		arr[p1].push_back(p2);
		arr[p2].push_back(p1);
	}
	walk(0,1);
	cout<<mx;
}
