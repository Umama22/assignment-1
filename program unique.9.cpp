#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	
	int c = sizeof(arr)/sizeof(arr[0]);

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
    
    cout <<"\nUnique elements of the said array: ";
    for (int i=0;i<c;i++)
    {
        int j;
        for (j=0;j<i;j++)
           if (arr[i] == arr[j])
               break;
         if (i == j)
          cout << arr[i] << " ";
    }
    return 0; 
}
