
#include <iostream>

using namespace std;

int main()
{
    int row=1;
    char ch=65;
    cout<<"Enter the number of rows:";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
     for(int j=1;j<=row;j++)
     {
      cout<<ch<<" ";
     }
     cout<<endl;
     ch=ch+1;
    }
    return 0;
}
