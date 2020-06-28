%:include<cstdio>
main()
{
	int n;
	scanf("%d",&n);
	int a[n],w=0;
	for(int i=0;i<n;scanf("%d",&a[i++]));
	for(int i=0;i<n;i++) 
		{w+=((a[i]%2553)*(((((n-i)%2553)*((1+n-i)%2553))/2)%2553))%2553;w%=2553;}
	printf("%d",w);
}
