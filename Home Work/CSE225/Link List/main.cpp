#include <bits/stdc++.h>
#include "UnsortedType.h"
#include "UnsortedType.cpp"
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  UnsortedType<int> list;
  for (int i = 0; i < 11; i++)
  {
    int x;
    cin >> x;
    list.InsertItem(x);
  }
  list.ResetList();
  for (int i = 0; i < list.LengthIs(); i++)
  {
    int x;
    list.GetNextItem(x);
    cout << x << " ";
  }
  return 0;
}