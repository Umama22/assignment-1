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
	cout<<"choose number to identify array";
	cin>>c;
	bool flag;
	for(int i=1;i<5;i++)
	{
		if(c==arr[i])
		flag++;
		if(flag==1)
		cout<<"value found";
		else
		{
			cout<<"value not found";
		}
	}
	return 0;
	
}
