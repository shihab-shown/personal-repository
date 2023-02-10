#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  string s;
  int a;
  cin >> s;
  int len = s.length();
  if (s[len - 2] == 'P')
  {
    a = (s[0] - '0') * 10 + (s[1] - '0');
    if (a == 12)
    {
      for (int i = 0; i < len - 2; i++)
      {
        cout << s[i];
      }
    }
    else
    {
      a += 12;
      cout << a;
      for (int i = 2; i < len - 2; i++)
      {
        cout << s[i];
      }
    }
  }
  else
  {
    a = (s[0] - '0') * 10 + (s[1] - '0');
    if (a == 12)
    {
      cout << "00";
      for (int i = 2; i < len - 2; i++)
      {
        cout << s[i];
      }
    }
    else
    {
      for (int i = 0; i < len - 2; i++)
      {
        cout << s[i];
      }
    }
  }
  
  return 0;
}