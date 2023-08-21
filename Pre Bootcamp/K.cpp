#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int x1, v1, x2, v2;
  cin >> x1 >> v1 >> x2 >> v2;
  if (x1 < x2 && v1 < v2)
    cout << "NO" << endl;
  else if (x1 > x2 && v1 > v2)
    cout << "NO" << endl;
  else if (x1 == x2 && v1 == v2)
    cout << "YES" << endl;
  else if (x1 == x2 && v1 != v2)
    cout << "NO" << endl;
  else if (x1 != x2 && v1 == v2)
    cout << "NO" << endl;
  else if ((x1 - x2) % (v2 - v1) == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}