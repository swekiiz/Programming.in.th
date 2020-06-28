#include<bits/stdc++.h>
int w,ch[1003002],a;
main(){
	scanf("%d",&w);
	for(int i=2,p=10,k=1;i<1003002;i++){
		if(i==p) k++,p*=10;
		if(ch[i]==(a=0)){
			for(int j=i<<1;j<1003002;j+=i) ch[j]=1;
			if(i>=w){
				for(int y=1,l=pow(10,k-1),r=1;y<=k>>1;y++,l/=10,r*=10) if(i/l%10!=i/r%10) a=1;
				if(a==0){
					printf("%d",i);
					return 0;
				}
			}
		}
	}
}
