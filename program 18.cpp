#include<iostream>
using namespace std;
int main()
{
int arr[5],arr1[5],merge[5];
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
	cout<<"enter five values"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"values"<<i+1<<":";
		cin>>arr1[i];
	}
	cout<<"values are";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	for(int i=0;i<5;i++)
	{
		merge[i]=arr[i];
	}
	for(int i=0;i<5;i++)
	{
		merge[i+1]=arr1[i];
	}
	cout<<"merged array";
	for(int i=0;i<5+3;i++)
	{
		cout<<merge[i];
	}
	return 0;
}
