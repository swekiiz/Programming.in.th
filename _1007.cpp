#include<iostream>
using namespace std;
struct bee{int work=0,sol=0;}mem[25];
int a;
main(){
	mem[0].work=1;
	for(int i=1;i<25;i++){
		a=mem[i-1].sol;
		mem[i].sol=mem[i-1].work;
		mem[i].work=1+mem[i-1].work+a;
	}
	while(1){
		cin>>a;
		if(-1==a) return 0;
		cout<<mem[a].work<<' '<<mem[a].sol+mem[a].work+1<<endl;
	}
}
