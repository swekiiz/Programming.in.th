#include<cstdio>
int k,n,m,w,a[12345],c[12345],t,mem[257];
int pt(int x){
    if(x==0) return 1;
    if(x&1==0){
        int d=pt(x>>1);
        return d*d;
    }
    return pt(x-1)<<1;
}
int dp(int x,int s){
    if(s==k-1) return 0;
    if(mem[s]!=0) return mem[s];
    if(x>n) return 2e9;
    if(dp(x+1,s|a[x])+c[x]>dp(x+1,s))
        return mem[s]=dp(x+1,s);
    else return mem[s]=dp(x+1,s|a[x])+c[x];
}
main(){
    scanf("%d %d",&n,&m);
    k=pt(m);
    for(int i=1;i<=n;i++){
        scanf("%d",&c[i]);
        w=0;
        for(int j=0;j<m;j++){
            scanf("%d",&t);
            w<<=1;
            if(t==1) w++;
        }
        a[i]=w;
    }
    printf("%d",dp(0,0));
}

