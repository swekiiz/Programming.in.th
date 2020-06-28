#include<iostream>
#include<string>
using namespace std;
main()
{
	int d,m,h=0;
	string a[7]={"Wednesday","Thursday","Friday","Saturday",
                 "Sunday","Monday","Tuesday"};
	cin>>d>>m;
	switch(m)
	{
		case 1: h=0;break;
		case 2: h=31;break;
		case 3: h=59;break;
		case 4: h=90;break;
		case 5: h=120;break;
		case 6: h=151;break;
		case 7: h=181;break;
		case 8: h=212;break;
		case 9: h=243;break;
		case 10: h=273;break;
		case 11: h=304;break;
		case 12: h=334;break;
	}
	h+=d;
	cout<<a[h%7];
}
