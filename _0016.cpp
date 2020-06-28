#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	char c[n+1],g[3];
	int f[]={0,0,0};
	scanf("%s",c);
	for(int i=0;i<n;i++)
	{
		if(i%3==0) g[0]='A';
		if(i%3==1) g[0]='B';
		if(i%3==2) g[0]='C';
		if(i%4==1) g[1]='A';
		if(i%4==3) g[1]='C';
		if(i%4==0||i%4==2) g[1]='B';
		if(i%6==0||i%6==1) g[2]='C';
		if(i%6==2||i%6==3) g[2]='A';
		if(i%6==4||i%6==5) g[2]='B';
		if(g[0]==c[i]) f[0]++;
		if(g[1]==c[i]) f[1]++;
		if(g[2]==c[i]) f[2]++;
	}
	int mx=f[0];
	if(f[1]>mx) mx=f[1];
	if(f[2]>mx) mx=f[2];
	printf("%d",mx);
	if(f[0]==mx) printf("\nAdrian");
	if(f[1]==mx) printf("\nBruno");
	if(f[2]==mx) printf("\nGoran");
}
