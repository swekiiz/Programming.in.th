#include<bits/stdc++.h>
int s[10000],n,c,p;
int b(int l,int r,int x){
	while(l<=r){
		int m=l+((r-l)>>1);
		if(x==s[m]) return m;
		if(x<s[m]) r=m-1;
		if(x>s[m]) l=m+1;
	}
	return l;
}
main(){
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d",&p);
		if(p>s[c]) s[++c]=p;
		else if(p<s[c]) s[b(1,c,p)]=p;
	}
	printf("%d",c);
}
