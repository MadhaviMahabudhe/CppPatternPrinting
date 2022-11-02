
#include <iostream>

using namespace std;

int main()
{
   int row; 
   cout<<"Enter the no. of rows:";
   cin>>row;
  for(int i=1;i<=row;i++)
  { 
      char ch='A';
      ch=ch+i-1;
      for(int j=1;j<=i;j++)
      {
         cout<<ch;
         ch++;
      }
      cout<<endl;
  }
    return 0;
}
