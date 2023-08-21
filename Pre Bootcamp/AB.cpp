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
  map<string, int> mp;
  while (n--)
  {
    int x;
    cin >> x;
    if (x == 1)
    {
      string s;
      int y;
      cin >> s >> y;
      mp[s] += y;
    }
    else if (x == 2)
    {
      string s;
      cin >> s;
      mp.erase(s);
    }
    else if (x == 3)
    {
      string s;
      cin >> s;
      cout << mp[s] << endl;
    }
  }
  return 0;
}