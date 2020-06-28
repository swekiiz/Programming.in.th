#include<bits/stdc++.h>
main(){
	int a,b,c;
	char p[5];
	scanf("%d %d %d",&a,&b,&c);
	if(a>b) std::swap(a,b);
	if(a>c) std::swap(a,c);
	if(b>c) std::swap(b,c);
	scanf("%s",p);
	for(int i=0;i<3;i++){
		if(p[i]==65) printf("%d ",a);
		if(p[i]==66) printf("%d ",b);
		if(p[i]==67) printf("%d ",c);	
	}
}
