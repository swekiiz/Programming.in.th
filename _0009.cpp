#include<stdio.h>
main(){
	int arr[4],a=123,b=0,c=-123;
	char s[10];
	for(int i=0;i<3;i++)
		scanf("%d ",&arr[i]);
	scanf("%s",s);	
	for(int i=0;i<3;i++){
		if(arr[i]<a)
			a=arr[i];
		if(arr[i]>c)
			c=arr[i];
	}
	for(int i=0;i<3;i++)
		if(arr[i]!=a&&arr[i]!=c)
			b=arr[i];
	for(int i=0;i<3;i++)
		if(s[i]=='A')
			printf("%d ",a);
		else if(s[i]=='B')
			printf("%d ",b);
		else if(s[i]=='C')
			printf("%d ",c);
}
