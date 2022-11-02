

#include <iostream>

using namespace std;

int
main ()
{
  int row;
  cout << "Enter the no. of rows:";
  cin >> row;
  for (int i = 1; i <= row; i++)
    {
      for (int j = 1; j <= row - (i - 1); j++)
	{
	  cout << j << " ";
	}
      for (int k = 1; k <= i - 1; k++)
	{
	  cout << "*" << " ";
	}
      for (int a = 1; a <= i - 1; a++)
	{
	  cout << "*" << " ";
	}
      int val = row - (i - 1);
      for (int b = 1; b <= row - (i - 1); b++)
	{
	  cout << val << " ";
	  val--;
	}


      cout << endl;
    }












  return 0;
}
