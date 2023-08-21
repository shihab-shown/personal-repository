#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string, int> a;
int main()
{
  int m, n, y;
  string x;
  cin >> m >> n;
  while (m--)
  {
    cin >> x >> y;
    a[x] = y;
  }
  int s;
  while (n--)
  {
    s =0;
    while (cin >> x, x != ".")
    {
      
      s += a[x];
    }
    cout<<s<<"\n";
  }
  return 0;
}