/* program to calculate reverse of number */
#include<iostream>
using namespace std;
int main()
{
	int n,a,b;
	cout<<" enter 3-digit numer";
	cin>>n;
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	cout<<"revese number is:"<<n<<b<<a;
	return 0;
}
