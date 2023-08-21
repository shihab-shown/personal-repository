#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int n, k, q;
  cin >> n >> k >> q;
  int l,r;
  int a[200005] = {0};
  for (int i = 0; i < n; i++)
  {
    cin >> l >> r;
    a[l]++;
    a[r+1]--;
  }
  for (int i = 1; i <= 200000; i++)
  {
    a[i] += a[i-1];
  }
  for (int i = 1; i <= 200000; i++)
  {
    if (a[i] >= k)
    {
      a[i] = 1;
    }
    else
    {
      a[i] = 0;
    }
  }
  for (int i = 1; i <= 200000; i++)
  {
    a[i] += a[i-1];
  }
  for (int i = 0; i < q; i++)
  {
    cin >> l >> r;
    cout << a[r] - a[l-1] << endl;
  }
  return 0;
}