#include<iostream>
using namespace std;
int qs[1002][1002];
main()
{
	int n,m,k,maxx=-1;
	
	// input N,M,K
	scanf("%d %d %d",&n,&m,&k);
	
	// input table
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			scanf("%d",&qs[i][j]);
			
	// start quicksum algorithm		
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			qs[i][j] = qs[i][j] + qs[i][j-1] + qs[i-1][j] - qs[i-1][j-1];
		//    new    =   now    +   left     +    top     -   top left
	
	// find max
	for(int i=1;i<=n-k;i++)
		for(int j=1;j<=m-k;j++)
			if(maxx<qs[i+k][j+k]-qs[i][j+k]-qs[i+k][j]+qs[i][j])
				maxx = qs[i+k][j+k] - qs[i][j+k] - qs[i+k][j] + qs[i][j];
	
	// ANSWER : print max
	printf("%d",maxx);
}
