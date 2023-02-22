#include<iostream>
using namespace std;
int main()
{
	int p,q,i,flag=0;
	q=0;
	cout<<" enter number to check prime";
	cin>>p;
	q=p/2;
	for(i=2;i<=q;i++)
	{
		if( p%i==0)
		{
			cout<<"number is not prime:"<<endl;
			flag=1;
			break;
		}
		
	}
	if( flag==0)
		cout<<"number is prime:"<<endl;
		
	return 0;
}
