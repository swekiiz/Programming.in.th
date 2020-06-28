#include<iostream>
#include<string>
using namespace std;
int te,bon=1,nar=2,sai=3,lar=5,kwa=4,rar=6,n;
void forward()
{
	te=bon;
	bon=lar;
	lar=rar;
	rar=nar;
	nar=te;
}
void backward()
{
	te=lar;
	lar=bon;
	bon=nar;
	nar=rar;
	rar=te;
}
void left()
{
	te=sai;
	sai=bon;
	bon=kwa;
	kwa=rar;
	rar=te;
}
void right()
{
	te=bon;
	bon=sai;
	sai=rar;
	rar=kwa;
	kwa=te;
}
void clockwise()
{
	te=nar;
	nar=kwa;
	kwa=lar;
	lar=sai;
	sai=te;
}
void countercw()
{
	te=nar;
	nar=sai;
	sai=lar;
	lar=kwa;
	kwa=te;
}
main()
{
	string ch;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ch;
		for(int j=0;j<ch.length();j++)
		{
			if(ch[j]=='F') forward();
			if(ch[j]=='B') backward();
			if(ch[j]=='L') left();
			if(ch[j]=='R') right();
			if(ch[j]=='C') clockwise();
			if(ch[j]=='D') countercw();
		}
		cout<<nar<<' ';
		bon=1,nar=2,sai=3,lar=5,kwa=4,rar=6;
	}
}
