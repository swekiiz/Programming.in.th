#include<cstdio>
char c[10002];
main(){
	scanf("%s",c);
	for(int i=0,y=0,l=0;;++i){
		if(c[i]==0){
			if(y==1&&l==1) printf("Mix");
			else if(l==1) printf("All Small Letter");
			else printf("All Capital Letter");
			return 0;
		}
		if(c[i]>=65&&c[i]<=90) y=1;
		else l=1;
	}
}
