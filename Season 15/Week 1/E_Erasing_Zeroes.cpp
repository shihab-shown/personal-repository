#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int t, len, count , x, y;
  cin >> t;
  while (t--)
  {
    count = 0;
    x = -1;
    y = -1;
    string s;
    cin >> s;
    len = s.length();
    for (int i = 0; i < len; i++)
    {
      if (s[i] == '1')
      {
        x = i;
        break;
      }
    }
    for (int j = (len - 1); j >= 0; j--)
    {
      if (s[j] == '1')
      {
        y = j;
        break;
      }
    }
    if (x == -1 && y == -1)
    {
      cout << 0 << endl;
    }
    else
    {
      for (int i = x; i < y; i++)
      {
        if (s[i] == '0')
        {
          count++;
        }
      }
      cout << count << endl;
    }
  }
  return 0;
}