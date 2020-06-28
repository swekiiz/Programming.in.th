#include<bits/stdc++.h>
using namespace std;
vector<char> a;
int n,h,l,f,t,x,y;
string ta[3][3]={{"-","ABC","DEF"},{"GHI","JKL","MNO"},{"PQRS","TUV","WXYZ"}};
void ad(int H,int L,int F){
	if(H==0&&L==0) for(int i=0;i<F&&!a.empty();i++) a.pop_back();
	else{
		F--;
		if(H==2){
			if(L==0||L==2) F%=4;
			else F%=3;
		}
		else F%=3;
		a.push_back(ta[H][L].at(F));
	}
}
main(){
	scanf("%d",&n);
	scanf("%d %d",&t,&f);
	h=(t-1)/3,l=(t-1)%3;
	ad(h,l,f);
	for(int i=1;i<n;i++){
		scanf("%d %d %d",&x,&y,&f);
		h+=y,l+=x;
		ad(h,l,f);
	}
	for(int i=0;i<a.size();++i) printf("%c",a[i]);
	if(a.empty()) printf("null");
}
