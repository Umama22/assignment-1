#include<iostream>
using namespace std;
int main()
{
	

	int arr[5];
	int number;
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
	cout<<" press 1 to separate odd and even integer\n";
	cout<<"press 2 to count odd and even integer\n";
	cout<<"press 3 for sorting element in ascending order\n";
	cout<<"press 4 for sorting element in descending order\n";
	cout<<"press 5 for finding 2nd element in array\n";
	cout<<"press 6 for finding largest element in array\n";
	cout<<"press 7 for checking array are same or not\n";
	cout<<"press 8 to merge two unsorted array\n";
	cout<<"press 9 for finding maximum difference\n";
	cout<<"enter any number from 1 to 9 \t";
	cin>>number;
	switch(number)
	 {
  case 1:
  {
  	
    	int arr1[5];
	int arr2[5];
	cout<<"enter five values"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"values"<<i+1<<":";
		cin>>arr1[i];
	}
	cout<<"values are";
	for(int i=0;i<5;i++)
	{
		cout<<arr1[i]<<"\t";
	}
		cout<<"list of even number is";
	for(int i=1;i<5;i++)
	{
		if(arr1[i]%2==0)
		cout<<arr1[i];
	}
	
				cout<<"list of odd number is";
	for(int i=1;i<5;i++)
	{
		if(arr1[i]%2!=0)
		cout<<arr1[i];
	}
		cout<<"enter five values"<<endl;
	for(int j=0;j<5;j++)
	{
		cout<<"values"<<j+1<<":";
		cin>>arr2[j];
	}
	cout<<"values are";
	for(int j=0;j<5;j++)
	{
		cout<<arr2[j]<<"\t";
	}
	cout<<"list of even number is";
	for(int j=1;j<5;j++)
	{
		if(arr2[j]%2==0)
		cout<<arr2[j];
	}
	
	cout<<"list of odd number is";
	for(int j=1;j<5;j++)
	{
		if(arr2[j]%2!=0)
		cout<<arr2[j];
	}
		
    break;
}
  case 2:
  	{
  		int temp=0;
	cout<<"the sorted array in ascending order is :"<<endl;
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			
		}
	cout<<arr[i]<<"\t";	
	}
    	
    break;
	}
    case 3:
    	{
    		int temp=0;
  cout<<endl;
	cout<<"the sorted array in descending order is :"<<endl;
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			
		}
	cout<<arr[i]<<"\t";	
	}
    break;
}
	case 4:
		{
			int even=0;
			int odd=0;
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		even++;
		else
		{
			odd++;
		}
	}
	cout<<"total number of even number is:"<<even;
	cout<<"total number of odd is :"<<odd;
		break;
}
	case 5:
		{
			int n;
		int small=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<small)
		small=arr[i];
	}
	int sec_small=1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=small&&arr[i]<sec_small)
		sec_small=arr[i];
	}
	cout<<"sec_small";
	break;
}
	
	case 6:
	{
		int n=sizeof(arr)/sizeof(arr[0]);
			int large=arr[5];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>large)
		large=arr[i];
	}
	int sec_large=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=large)
		sec_large=arr[i];
	}
	cout<<"largest element in array :"<<large;
	cout<<"second largest element in array:"<<sec_large;

		break;
	}
		case 7:
			{int arr1[5];
					cout<<"enter five values"<<endl;
	for(int j=0;j<5;j++)
	{
		cout<<"values"<<j+1<<":";
		cin>>arr1[j];
	}
				cout<<"values are";
	for(int j=0;j<5;j++)
	{
		cout<<arr1[j]<<"\t";
	}
	if(sizeof(arr)==sizeof(arr1))
	{cout<<"same";
	}
	else
	{
		cout<<"not same";
	}
			break;
		}
			case 8:
				{
				int arr1[5],merge[5];
			cout<<"enter five values"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"values"<<i+1<<":";
		cin>>arr1[i];
	}
	cout<<"values are";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	for(int i=0;i<5;i++)
	{
		merge[i]=arr[i];
	}
	for(int i=0;i<5;i++)
	{
		merge[i+1]=arr1[i];
	}
	cout<<"merged array";
	for(int i=0;i<5+3;i++)
	{
		cout<<merge[i];
	}
				break;
			}
				case 9:
				{ int large,i,small;
				large=small=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i>large])
		large=arr[i];
		if(arr[i]<small)
		small=arr[i];
	}
	cout<<endl<<"the maximum difference between"<<large-small;
	cout<<"and"<<small<<"is"<<large<<endl;
					break;
				}
					default:
						cout<<"invalid";
}
return 0;
}
