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
	cout<<" press 1 for finding minimum number\n";
	cout<<"press 2 for finding maximum number\n";
	cout<<"press 3 for finding identify\n";
	cout<<"press 4 for finding count\n";
	cout<<"press 5 for finding odd\n";
	cout<<"press 6 for finding even\n";
	cout<<"press 7 for finding sum\n";
	cout<<"press 8 for finding reverse\n";
	cout<<"press 9 for finding unique\n";
	cout<<"enter any number from 1 to 9 \t";
	cin>>number;
	switch(number)
	 {
  case 1:
  {
    	int min=arr[0];
	for(int i=1;i<5;i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	cout<<"minimum value is"<<min;
	return 0;	
	
    break;
}
  case 2:
  	{
	
    	int max=arr[0];
	for(int i=1;i<5;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	cout<<"maximum value is"<<max;	
	return 0;
    break;
	}
    case 3:
    	{
    int c;
	cout<<"choose number to identify array";
	cin>>c;
	bool flag;
	for(int i=1;i<5;i++)
	{
		if(c==arr[i])
		flag++;
		if(flag==1)
		cout<<"value found";
		else
		{
			cout<<"value not found";
		}
	}
    break;
}
	case 4:
		{
	int c;
	cout<<"enter number you want to check repeat";
	cin>>c;
	int count=0;
	for(int i=1;i<5;i++)
	{
		if(c==arr[i])
		count++;
	}
	cout<<"value found in array is"<<count;	
	break;
}
	case 5:
		{
	cout<<"list of odd number is";
	for(int i=1;i<5;i++)
	{
		if(arr[i]%2!=0)
		cout<<arr[i];
	}
	break;}
	case 6:
	{
			cout<<"list of even number is";
	for(int i=1;i<5;i++)
	{
		if(arr[i]%2==0)
		cout<<arr[i];
	}
		break;
	}
		case 7:
			{
				cout<<"list of even number is";
	for(int i=1;i<5;i++)
	{
		if(arr[i]%2==0)
		cout<<arr[i];
	}
			break;
		}
			case 8:
				{
					int n;
				for(int i=n-1;i>=0;i--)
	{
		cout<<arr[i];
	}
				break;
			}
				case 9:
				{ 
				int c;
	
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
					break;
				}
					default:
						cout<<"invalid";
}
return 0;
}
