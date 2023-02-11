#include <bits/stdc++.h>
#include "dynArr.cpp"
using namespace std;

int main()
{
  dynArr a();
  // dynArr b(5);
  // cout<<"Enter five values: \n";
  // for(int i=0; i<5; i++)
  // {
  //   int x;
  //   cin>>x;
  //   b.setValue(i, x);
  // }
  // for(int i=0; i<5; i++)
  // {
  //   cout<<b.getValue(i)<<" ";
  // }
  int row,col;
  cout<<"Enter row and column number: \n";
  cin>>row>>col;
  dynArr c(row, col);
  cout<<"Enter "<<row*col<<" values: \n";
  for(int i=0; i<row; i++)
  {
    for(int j=0; j<col; j++)
    {
      int x;
      cin>>x;
      c.setValue(i, j, x);
    }
  }
  for(int i=0; i<row; i++)
  {
    for(int j=0; j<col; j++)
    {
      cout<<c.getValue(i, j)<<" ";
    }
    cout<<"\n";
  }
  return 0;
}