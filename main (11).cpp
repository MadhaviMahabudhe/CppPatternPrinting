
#include <iostream>

using namespace std;

int main()
{
    int row;
    char ch='A';
    cout<<"Enter the number of rows:";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
     ch='A'+i-1;   
     for(int j=1;j<=row;j++)
     {
     cout<<ch<<" ";
     ch=ch+1;
     }
     cout<<endl;
    }
    return 0;
}
