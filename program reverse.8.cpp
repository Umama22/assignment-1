#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int n=5;
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
	for(int i=n-1;i>=0;i--)
	{
		cout<<arr[i];
	}
	return 0;
}
	
