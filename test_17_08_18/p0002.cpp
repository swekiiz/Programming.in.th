#include<bits/stdc++.h>
int r,t,n=INT_MAX,x=INT_MIN;
main(){
	std::cin>>r;
	for(int i=0;i<r;i++){
		std::cin>>t;
		n=std::min(n,t),x=std::max(x,t);
	}
	std::cout<<n<<std::endl<<x;
}
