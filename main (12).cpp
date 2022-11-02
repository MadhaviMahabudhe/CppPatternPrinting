#include <iostream>

using namespace std;

int main()
{
  int row,i,j;
  char ch=65;
  cout<<"Enter the value of rows:";
  cin>>row;
  for(i=1;i<=row;i++)
  {
      
     for(j=1;j<=row;j++) 
       {
         cout<<ch;
         ch++;
       }
      ch= ch-2;
    cout<<endl;
     
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  return 0;
}
