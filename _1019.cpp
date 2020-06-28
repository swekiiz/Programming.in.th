#include<stdio.h>
#include<string.h>
main()
{
	char f[210],g[210];
	int mx=0,k=0;
	scanf("%s %s",f,g);
	if(strlen(f)!=1&&strlen(g)!=1)
	{
		for(int i=0;i<strlen(f);i++)
			for(int j=0;j<strlen(g);j++) if(f[i]==g[j])
				for(int n=0;1;n++) if(f[i+n]!=g[j+n])
				{
					if(n>mx)
					{
						mx=n;
						k=i;
					}
					break;
				}
		if(mx!=0) for(int h=0;h<mx;h++)
			if(f[k+h]!='\0')
				printf("%c",f[k+h]);
	}
}
