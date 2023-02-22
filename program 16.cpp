#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int n=sizeof(arr)/sizeof(arr[0]);
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
	int large=arr[5];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>large)
		large=arr[i];
	}
	int sec_large=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=large)
		sec_large=arr[i];
	}
	cout<<"largest element in array :"<<large;
	cout<<"second largest element in array:"<<sec_large;
}
