#include<iostream>
using namespace std;
int main()
{
	int year,week,days;
	cout<<"number of days:"<<endl;
	cin>>days;
	year=days/365;
	days=days*365;
	week=days/7;
	cout<<"\nyears"<<"\nweek"<<"\ndays"<<days<<endl;
	return 0; 
}
