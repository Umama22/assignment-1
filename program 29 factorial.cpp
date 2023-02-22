#include<iostream>
using namespace std;
int main() 
{
	int n,f=1,a;
	cout<<" Enter Number To Find Its Factorial:  ";
	cin>>n;
	for (int a=1;a<=n;a++) 
	{
		f=f*a;
	}
	cout<<"Factorial of Given Number is ="<<f<<endl;
	return 0;
}	
