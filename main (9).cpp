
#include <iostream>

using namespace std;

int main()
{
    int row;
    char ch;
    cout<<"Enter the number of rows:";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
     for(int j=1;j<=row;j++)
     {
      ch='A'+j-1;
      cout<<ch<<" ";
     }
     cout<<endl;
    }
    return 0;
}
