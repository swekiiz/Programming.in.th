#include<cstdio>
int n,m,t,a[101][101];
main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++) for(int j=0;j<m;j++){
		scanf("%d",&t);
		a[i][j]=t;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&t);
			printf("%d ",a[i][j]+t);
		}
		puts("");
	}
}
