#include <bits/stdc++.h>
#include "dynarr.h"
#include "dynarr.cpp"

using namespace std;

int main()
{
  cout<<"Enter row and column: \n";
  int r, c;
  cin>>r>>c;
  dynArr<char> a(r, c);
  char x;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cin>>x;
      a.setValue(i, j, x);
    }
  }
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout<<a.getValue(i, j)<<" ";
    }
    cout<<endl;
  }
  
  return 0;
}