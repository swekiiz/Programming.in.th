#include<bits/stdc++.h>
main(){
	char c[52];
	int a[3]={1,0,0};
	scanf("%s",c);
	for(int i=0;;i++){
		if(c[i]==0){
			for(int j=0;j<3;j++) if(a[j]==1) printf("%d",1+j);
			return 0;
		}
		if(c[i]==65) std::swap(a[0],a[1]);
		if(c[i]==66) std::swap(a[1],a[2]);
		if(c[i]==67) std::swap(a[0],a[2]);
	}
}
