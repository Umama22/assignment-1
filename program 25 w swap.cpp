#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout<<"enter two values";
	cin>>a>>b;
	cout<<"befpre swap a="<<a<<"b="<<b<<endl;
	a=a*b;
	b=a/b;
	a=a/b;
	cout<<"after swap a="<<a<<"b="<<b<<endl;
	return 0;
}
