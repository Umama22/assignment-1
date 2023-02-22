#include<iostream>
using namespace std;
int main()
{
	int arr1[5];
	int arr2[5];
	cout<<"enter five values"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"values"<<i+1<<":";
		cin>>arr1[i];
	}
	cout<<"values are";
	for(int i=0;i<5;i++)
	{
		cout<<arr1[i]<<"\t";
	}
		cout<<"list of even number is";
	for(int i=1;i<5;i++)
	{
		if(arr1[i]%2==0)
		cout<<arr1[i];
	}
	
				cout<<"list of odd number is";
	for(int i=1;i<5;i++)
	{
		if(arr1[i]%2!=0)
		cout<<arr1[i];
	}
		cout<<"enter five values"<<endl;
	for(int j=0;j<5;j++)
	{
		cout<<"values"<<j+1<<":";
		cin>>arr2[j];
	}
	cout<<"values are";
	for(int j=0;j<5;j++)
	{
		cout<<arr2[j]<<"\t";
	}
	cout<<"list of even number is";
	for(int j=1;j<5;j++)
	{
		if(arr2[j]%2==0)
		cout<<arr2[j];
	}
	
	cout<<"list of odd number is";
	for(int j=1;j<5;j++)
	{
		if(arr2[j]%2!=0)
		cout<<arr2[j];
	}
		
	return 0;
}
