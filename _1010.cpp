#include<iostream>
#include<cctype>
using namespace std;
int n,m,k,a1,a2;
char t,tab[26][26],wh[26];
bool ch;
string ts;
void s(int si)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if(wh[0]==tab[i][j])
			{
				ch=false;
				for(int r=0;r<si;r++)
					if(i-r<0) {ch=true;break;}
					else if(tab[i-r][j]!=wh[r]) ch=true;
				if(!ch) {a1=i,a2=j;return;} ch=false;
				for(int r=0;r<si;r++)
					if(i+r>=n) {ch=true;break;}
					else if(tab[i+r][j]!=wh[r]) ch=true;
				if(!ch) {a1=i,a2=j;return;} ch=false;
				for(int r=0;r<si;r++)
					if(j-r<0) {ch=true;break;}
					else if(tab[i][j-r]!=wh[r]) ch=true;
				if(!ch) {a1=i,a2=j;return;} ch=false;
				for(int r=0;r<si;r++)
					if(j+r>=m) {ch=true;break;}
					else if(tab[i][j+r]!=wh[r]) ch=true;
				if(!ch) {a1=i,a2=j;return;} ch=false;
				for(int r=0;r<si;r++)
					if(i-r<0||j-r<0) {ch=true;break;}
					else if(tab[i-r][j-r]!=wh[r]) ch=true;
				if(!ch) {a1=i,a2=j;return;} ch=false;
				for(int r=0;r<si;r++)
					if(i+r>=n||j+r>=m) {ch=true;break;}
					else if(tab[i+r][j+r]!=wh[r]) ch=true;
				if(!ch) {a1=i,a2=j;return;} ch=false;
				for(int r=0;r<si;r++)
					if(i+r>=n||j-r<0) {ch=true;break;}
					else if(tab[i+r][j-r]!=wh[r]) ch=true;
				if(!ch) {a1=i,a2=j;return;} ch=false;
				for(int r=0;r<si;r++)
					if(i-r<0||j+r>=m) {ch=true;break;}
					else if(tab[i-r][j+r]!=wh[r]) ch=true;
				if(!ch) {a1=i,a2=j;return;} ch=false;
			}
}
main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>ts;
		for(int j=0;j<ts.size();j++)
			tab[i][j]=tolower(ts[j]);
	}
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cin>>ts;
		for(int j=0;j<ts.size();j++)
			wh[j]=tolower(ts[j]);
		s(ts.size());
		cout<<a1<<' '<<a2<<endl;
	}
}
