
#include <iostream>

using namespace std;

int main()
{
    int row;
    char ch=65;
    cout<<"Enter the number of rows:";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
     for(int j=1;j<=row;j++)
     {
     cout<<ch<<" ";
     ch=ch+1;
     }
     cout<<endl;
    }
    return 0;
}
