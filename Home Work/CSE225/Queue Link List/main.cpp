#include <bits/stdc++.h>
#include "quetype.h"
#include "quetype.cpp"
using namespace std;
int main()
{
  int n, amount;
  cin >> n;
  int coin[n];
  for(int i = 0; i < n; i++)
  {
    cin >> coin[i];
  }
  cin >> amount;
  int table[amount + 1];
  for(int i = 0; i <= amount; i++)
  {
    table[i] = INT_MAX;
  }
  table[0] = 0;
  for(int i = 1; i <= amount; i++)
  {
    for(int j = 0; j < n; j++)
    {
      if(coin[j] <= i)
      {
        int sub_res = table[i - coin[j]];
        if(sub_res != INT_MAX && sub_res + 1 < table[i])
        {
          table[i] = sub_res + 1;
        }
      }
    }
  }
  cout << table[amount] << endl;
  
  return 0;
}