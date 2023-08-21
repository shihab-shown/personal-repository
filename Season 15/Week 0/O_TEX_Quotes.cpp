#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

int main()
{
  fast char s[10000];
  bool flag = true;
  while (gets(s))
  {
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
      if (s[i] == '"')
      {
        if (flag)
        {
          cout << "``";
        }
        else
        {
          cout << "''";
        }
        flag = !flag;
      }
      else
        cout << s[i];
    }
    cout << endl;
  }
  return 0;
}