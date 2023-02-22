#include<iostream>
using namespace std;
int main()
{
	int arr[5];
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
	int min=arr[0];
	for(int i=1;i<5;i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	cout<<"minimum value is"<<min;	
	
}
