#include<iostream>
#include<queue>
using namespace std;
int nc,ns;
struct student
{
	int ID;
	int acl;
};
int se(student a[],int x)
{
	int h=0;
	for(h;h<ns;++h)
	{
		if(a[h].ID==x)
		{
			return h;
		}
	}
}
int sec(student a[],int x)
{
	return a[se(a,x)].acl;
}
main()
{
	char r;
	cin>>nc>>ns;
	queue<int> liner[nc],Q;
	student arrs[ns];
	bool che=0;
	int ol[nc]={0},t,te;
	for(int i=0;i<ns;i++)
	{
		cin>>arrs[i].acl>>arrs[i].ID;
	}
	while(true)
	{
		cin>>r;
		t=0,te=0;
		if(r=='X')
		{
			cout<<0;
			break;
		}
		if(r=='E')
		{
			cin>>t;
			te=sec(arrs,t)-1;
			liner[te].push(t);
			if(ol[te]==0)
			{
				ol[te]=1;
				Q.push(te);
			}
		}
		if(r=='D')
		{
			che=0;
			if(!Q.empty())
			{
				for(int i=0;i<nc;i++)
				{
					int cj=Q.front();
					if(!liner[cj].empty())
					{
						cout<<liner[cj].front()<<endl;
						liner[cj].pop();
						if(liner[cj].empty())
						{
							if(!Q.empty())
								Q.pop();
							ol[cj]=0;
						}
						che=1;
						break;
					}
					else
					{
						if(!Q.empty())
							Q.pop();
						ol[cj]=0;
					}
				}
				if(che==0)
					cout<<"emply"<<endl;
			}
			else
				cout<<"emply"<<endl;
		}
	}
}
