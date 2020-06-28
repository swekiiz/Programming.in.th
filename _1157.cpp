#include<bits/stdc++.h>
using namespace std;
deque<pair<int,int> > Q;
int n,k,a[500001],t;
main(){
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		if(Q.empty()) Q.push_front(make_pair(a[i],i));
		else if(Q.front().first+a[i]>=Q.back().first)
			Q.push_back(make_pair(Q.front().first+a[i],i));
		else{
			t=Q.front().first+a[i];
			while(Q.back().first>t) Q.pop_back();
			Q.push_back(make_pair(t,i));
		}
		while(i-Q.front().second>=k) Q.pop_front();
	}
	printf("%d",Q.back());
}
