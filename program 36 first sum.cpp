//sum of first and last digit of number
#include<iostream>
using namespace std;
int main()
{
	int n,first,last,sum;
	cout<<"\n find sum of first and last digit of number:\n";
	cout<<"input any number";
	cin>>n;
	first=n;
	last=n%10;
	for(first=n;first>=10;first=first/10)
	{
		cout<<"first digit of"<<n<<"is:"<<first<<endl;
			cout<<"last digit of"<<n<<"is:"<<last<<endl;
				cout<<"the sum of first and last digit of"<<n<<"is:"<<first+last<<endl;
	}
	return 0;
}
