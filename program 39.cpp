#include<iostream>
using namespace std;
 
int main()

  {
 char str[40];
 int i;

 cout<<"Enter string:\n";
 gets(str);

 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]>='a'&& str[i]<='z')
  {
   str[i] = str[i]-32;
  }
 }

 cout<<"String in uppercase is:\n";
 puts(str);

 return 0;
}
