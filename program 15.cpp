#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int n;
	cout<<"enter five values"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"values"<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"values are";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int small=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<small)
		small=arr[i];
	}
	int sec_small=1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=small&&arr[i]<sec_small)
		sec_small=arr[i];
	}
	cout<<"sec_small";
}
