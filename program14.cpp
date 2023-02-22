#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int even=0;
	int odd=0;
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
	
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		even++;
		else
		{
			odd++;
		}
	}
	cout<<"total number of even number is:"<<even;
	cout<<"total number of odd is :"<<odd;
}
