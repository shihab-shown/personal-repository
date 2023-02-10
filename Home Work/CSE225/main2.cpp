#include <bits/stdc++.h>
using namespace std;

int main()
{
  int row;
  cout<<"Enter number of rows: \n";
  cin >> row;
  int **arr;
  arr = new int *[row];
  int *col;
  col = new int[row];
  for (int i = 0; i < row; i++)
  {
    cout << "Enter number of columns for row " << i+1 << ": ";
    cin >> col[i];
    arr[i] = new int[col[i]];
  }
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col[i]; j++)
    {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col[i]; j++)
    {
      cout << arr[i][j]<<"  ";
    }
    cout << "\n";
  }
  delete [] col;
  for (int i = 0; i < row; i++)
  {
    delete [] arr[i];
  }
  delete [] arr;

  return 0;
}