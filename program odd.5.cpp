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
	cout<<"list of odd number is";
	for(int i=1;i<5;i++)
	{
		if(arr[i]%2!=0)
		cout<<arr[i];
	}
		
	return 0;
}
