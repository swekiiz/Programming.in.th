#include<iostream>
int i,v,x,l,c,n;
void ro(int a){
	for(int j=100;j>=1;j/=10){
		if(j==100) c+=a/j;
		else if(j==10){
			if((a/j)*j==90) x++,c++;
			else if((a/j)*j==40) x++,l++;
			else if((a/j)*j>=50) l++,x+=((a/j)-5);
			else x+=a/j;
		}
		else if(j==1){
			if(a==9) x++,i++;
			else if(a==4) i++,v++;
			else if(a>=5) v++,i+=a-5;
			else i+=a/j;
		}
		a-=(a/j)*j;
	}
}
main(){
	std::cin>>n;
	for(int m=1;m<=n;++m) ro(m);
	std::cout<<i<<' '<<v<<' '<<x<<' '<<l<<' '<<c;
}
