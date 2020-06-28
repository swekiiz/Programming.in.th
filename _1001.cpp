#include<iostream>
using namespace std;
main()
{
	int h,l,p;
	cin>>h>>l;
	char t;
	int ch[h][l];
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<l;j++)
		{
			cin>>t;
			if(t=='.')
				ch[i][j]=0;
			else if(t=='O')
				ch[i][j]=1;
		}
	}
	for(int j=0;j<l;j++)
	{
		cin>>p;
		for(int i=0;i<p;i++)
		{
			int k=-1;
			while(ch[k+1][j]==0&&k<h-1)
				k++;
			ch[k][j]=2;
		}
	}
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<l;j++)
		{
			if(ch[i][j]==0)
				cout<<'.';
			else if(ch[i][j]==1)
				cout<<'O';
			else if(ch[i][j]==2)
				cout<<'#';
		}
		cout<<endl;
	}
}
