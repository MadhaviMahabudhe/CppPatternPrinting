
#include <iostream>

using namespace std;

int main()
{
  int row;
  cout<<"Enter the no. of rows:";
  cin>>row;
  for(int i=1;i<=row;i++)
  {
    for(int j=1;j<=i-1;j++)
    {
     cout<<" ";    
    }
    int value=i;
    for(int k=i;k<=row;k++)
    {
      cout<<value;
      value++;
    }
     cout<<endl;
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
    return 0;
}
