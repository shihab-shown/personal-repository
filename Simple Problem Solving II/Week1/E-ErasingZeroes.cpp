#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, size, count , x, y;
  string s;
  cin >> t;
  while (t--)
  {
    count =0;
    x = -1;
    y = -1;
    cin >> s;
    size = s.length();
    for (int i = 0; i < size; i++)
    {
      if (s[i] == '1')
      {
        x = i;
        break;
      }
    }
    for (int j = (size - 1); j >= 0; j--)
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