#include<iostream>
#include<string>
#include<cctype>
using namespace std;
main()
{
	string a;
	cin>>a;
	bool dup=1,pa=1;
	int p=a.size();
	int i=0,j=p/2-1,rj=(p+1)/2,ri=p-1;
	for(int k=0;k<p;k++)
		if(islower(a[k]))
			a[k]=toupper(a[k]);
	while(1)
	{
		if(i>=ri) break;
		if(a[i]!=a[ri]||a[j]!=a[rj])
		{
			pa=0;
			break;
		}
		if((a[i]!=a[j]||a[rj]!=a[ri])&&i!=j)
			dup=0;
		i++,j--,rj++,ri--;
	}
	if(pa)
	{
		if(dup) cout<<"Double Palindrome";
		else cout<<"Palindrome";
	}
	else cout<<"No";
}
