#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

int main()
{
  fast int n;
  cin >> n;
  string s, h = "0000000000";
  cin >> s;
  for (int a = 0; a < n; a++)
  {
    if (!isdigit(s[a]))
    {
      switch (s[a])
      {
      case 'L':
        for (int i = 0; i < 10; i++)
        {
          if (h[i] == '0')
          {
            h[i] = '1';
            break;
          }
        }
        break;
      case 'R':
        for (int i = 9; i >= 0; i--)
        {
          if (h[i] == '0')
          {
            h[i] = '1';
            break;
          }
        }
        break;
      default:
        break;
      }
    }
    else
    {
      h[(s[a] - '0')] = '0';
    }
  }
  cout << h << endl;
  return 0;
}