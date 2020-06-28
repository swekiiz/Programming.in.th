#include<iostream>
using namespace std;
int arr[6];
main()
{
	for(int i=0;i<5;i++) cin>>arr[i];
	for(int i=0;i<4;i++)
	{
		for(int j=1;j<5-i;j++)
		{
			if(arr[j]<arr[j-1])
			{
				int t=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=t;
				for(int k=0;k<5;k++) cout<<arr[k]<<' ';
				cout<<endl;
			}
		}
	}
}
