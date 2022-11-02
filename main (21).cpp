
#include <iostream>

using namespace std;

int main()
{
  int row;
  cout<<"Enter the no. of rows:";
  cin>>row;
  for(int i=1;i<=row;i++)
  {
      for(int j=1;j<=row-i;j++)
      {
        cout<<"  ";  
      }
      int val=1;
      for(int k=1;k<=i;k++)
      {
       cout<<val<<" ";
       val++;
      }
      for(int st=i-1;st;st--)
      {
          cout<<st<<" ";
      }
    cout<<endl;
  }
  
  
  
  
  
  
  
    return 0;
}
