#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int arr1[5];
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
	for(int j=0;j<5;j++)
	{
		cout<<"values"<<j+1<<":";
		cin>>arr1[j];
	}
	cout<<"values are";
	for(int j=0;j<5;j++)
	{
		cout<<arr1[j]<<"\t";
	}
	if(sizeof(arr)==sizeof(arr1))
	{cout<<"same";
	}
	else
	{
		cout<<"not same";
	}
 return 0;
}
	
