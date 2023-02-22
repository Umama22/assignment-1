#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int c;
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
	cout<<"enter number you want to check repeat";
	cin>>c;
	int count=0;
	for(int i=1;i<5;i++)
	{
		if(c==arr[i])
		count++;
	}
	cout<<"value found in array is"<<count;	
	return 0;
}
