
#include<iostream>
using namespace std;
int main()
{
	int n,a,b,temp=0;
	cout<<" enter 3-digit numer";
	cin>>n;
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	cout<<"revese number is:"<<n<<b<<a<<endl;
	n=temp;
	if( temp==n)
	{
		cout<<"number is palindrome:"<<endl;
	}
	else
	{
		cout<<"not palindrome:";
	}
	return 0;
}
