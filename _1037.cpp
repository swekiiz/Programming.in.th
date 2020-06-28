#include<iostream>
#include<queue>
#include<string>
using namespace std;
struct gar
{
	int y;int x;
};
int r,c,yd,xd,siqs,siqw,co,y,x;
queue<gar> Qw,Qs;
char arr[52][52];
bool water[52][52];
main()
{
	cin>>r>>c;
	for(int i=0;i<r;i++)
	{
		string temp;
		cin>>temp;
		for(int j=0;j<c;j++)
		{
			arr[i][j]=temp.c_str()[j];
			if(arr[i][j]=='D')
				yd=i,xd=j;
			if(arr[i][j]=='S')
				Qs.push((gar){i,j});
			if(arr[i][j]=='*')
				Qw.push((gar){i,j});
			if(arr[i][j]=='X')
				water[i][j]=true;
		}
	}
	while((!Qs.empty())||(!Qw.empty()))
	{
		if(!Qw.empty())
		{
			siqw=Qw.size();
			for(int i=0;i<siqw;i++)
			{
				y=Qw.front().y;
				x=Qw.front().x;
				Qw.pop();
				if(water[y][x]==false)
				{
					water[y][x]=true;
					if(y+1<r) if(arr[y+1][x]=='.')
						Qw.push((gar){y+1,x});
					if(y-1>=0) if(arr[y-1][x]=='.')
						Qw.push((gar){y-1,x});
					if(x+1<c) if(arr[y][x+1]=='.')
						Qw.push((gar){y,x+1});
					if(x-1>=0) if(arr[y][x-1]=='.')
						Qw.push((gar){y,x-1});
				}
			}
		}
		if(!Qs.empty())
		{
			siqs=Qs.size();
			for(int i=0;i<siqs;i++)
			{
				y=Qs.front().y;
				x=Qs.front().x;
				Qs.pop();
				if(y==yd&&x==xd)
				{
					cout<<co;
					return 0;
				}
				if(water[y][x]==false)
				{
					water[y][x]=true;
					if(y+1<r) if(water[y+1][x]==false)
						Qs.push((gar){y+1,x});
					if(y-1>=0) if(water[y-1][x]==false)
						Qs.push((gar){y-1,x});
					if(x+1<c) if(water[y][x+1]==false)
						Qs.push((gar){y,x+1});
					if(x-1>=0) if(water[y][x-1]==false)
						Qs.push((gar){y,x-1});
				}
			}
		}
		co++;
	}
	cout<<"KAKTUS";
}



















