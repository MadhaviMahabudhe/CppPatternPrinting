
#include <iostream>

using namespace std;

int main()
{
   int row; 
   cout<<"Enter the no. of rows:";
   cin>>row;
   char ch='A';
   for(int i=1;i<=row;i++){
       for(int j=1;j<=i;j++){
         cout<<ch;
         ch++;
           
       }
      cout<<endl; 
       
   }
    return 0;
}
