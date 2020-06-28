#include<cstdio>
#include<queue>
using namespace std;
main()
{
	priority_queue<int> Q;
	int n,t;
	char c;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf(" %c",&c);
		if(c=='P')
		{
			scanf("%d",&t);
			Q.push(t);
		}
		else if(c=='Q')
		{
			if(Q.empty())
				printf("-1\n");
			else
			{
				printf("%d\n",Q.top());
				Q.pop();
			}
		}
	}
}
