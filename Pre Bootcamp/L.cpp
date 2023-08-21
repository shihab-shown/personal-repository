#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int n, countEven = 0, countOdd = 0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i]%2==0)
    {
      countEven++;
    }
    else
    {
      countOdd++;
    }
  }
  if (countEven > countOdd)
  {
    for (int i = 0; i < n; i++)
    {
      if (a[i]%2!=0)
      {
        cout << i+1 << endl;
        break;
      }
    }
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      if (a[i]%2==0)
      {
        cout << i+1 << endl;
        break;
      }
    }
  }

  return 0;
}