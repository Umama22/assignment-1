#include<iostream>
using namespace std;
int main()
{
	int y;
	cout<<"enter year:";
	cin>>y;
	if(y%4==0)
	{
		cout<<"year is leap:";
	}
	else
	{
		cout<<"not leap year:";
	}
	return 0;
}
