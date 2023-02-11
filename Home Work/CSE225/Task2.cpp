#include <bits/stdc++.h>
using namespace std;

int main()
{
  int row;
  cout<<"Enter number of rows: \n";
  cin >> row;
  char **arr;
  arr = new char *[row];
  for (int i = 0; i < row; i++)
  {
    arr[i] = new char[row];
  }
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < row; j++)
    {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < row; j++)
    {
      cout << arr[i][j];
    }
    cout << "\n";
  } 
  delete [] arr;
  for (int i = 0; i < row; i++)
  {
    delete [] arr[i];
  }
  return 0;
}