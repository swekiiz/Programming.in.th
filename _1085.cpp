#include<iostream>
#include<list>
#include<algorithm>
#include<queue>
using namespace std;
int h,k,r,mx=1;
bool cann=false,che[500002];
list<int> ar[500002];
main()
{
	cin>>h>>k>>r;
	for(int i=0;i<k;i++)
	{
		int p1,p2;
		cin>>p1>>p2;
		ar[p1].push_back(p2);
	}
	for(int i=0;i<r;i++)
	{
		int ro;
		cin>>ro;
		che[ro]=true;
	}
	queue<int> Q;
	Q.push(1);
	while(!Q.empty())
	{
		int now=Q.front();
		Q.pop();
		if(che[now]==false)
		{
			Q.push(now+1);
			mx=max(mx,now+1);
			if(1+now==h) cann=true;
		}
		if(cann) break;
		list<int>::iterator it=ar[now].begin();
		while(it!=ar[now].end())
		{
			if(*it==h)
			{
				cann=true;
				break;
			}
			mx=max(mx,*it);
			Q.push(*it);
			it++;
		}
		if(cann) break;
	}
	if(cann) cout<<1;
	else cout<<0<<' '<<mx;
}





































