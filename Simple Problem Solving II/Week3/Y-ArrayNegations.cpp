#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int t, n, k;
  ll sum;
  cin >> t;
  while (t--)
  {
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    sort(a, a + n);
    if (k < n)
    {
      for (int i = 0; i < k; i++)
      {
        a[i] = (a[i] * -1);
      }
    }
    else
    {
      while (k > n)
      {
        for (int j = 0; j < n; j++)
        {
          a[j] = (a[j] * -1);
        }
        k = k-n;
      }
      for (int i = 0; i < k; i++)
      {
        a[i] = (a[i] * -1);
      }
    }

    sum = 0;
    for (int i = 0; i < n; i++)
    {
      sum += a[i];
    }
    cout << sum << "\n";
  }

  return 0;
}