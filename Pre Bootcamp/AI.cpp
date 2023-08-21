#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

bool validTriangle(int a, int b, int c)
{
  int sum = 0;
  sum = a + b + c;
  if (sum == 180 && a != 0 && b != 0 && c != 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  fast int t;
  cin >> t;
  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    if (validTriangle(a, b, c))
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}