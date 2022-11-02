
#include <iostream>

using namespace std;

int main()
{
   int row; 
   char ch='A';
   cout<<"Enter the no. of rows:";
   cin>>row;
  for(int i=1;i<=row;i++)
  { 
      ch=ch-i+row;
      for(int j=1;j<=i;j++)
      {
         cout<<ch;
         ch++;
      }
      cout<<endl;
     ch='A';
  }
    return 0;
}
