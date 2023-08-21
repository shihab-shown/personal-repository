#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, n, sum;
  cin >> t;
  while (t--)
  {
    sum = 0;
    vector<int> a;
    cin >> n;
    for (int i = 1; i * i <= n; i++)
    {
      if (n % i == 0)
      {
        a.push_back(i);
        if (n / i != i)
        {
          a.push_back(n / i);
        }
      }
    }
    sort(a.begin(), a.end());
    int x = (a.size() - 1);
    for (int i = 0; i < x; i++)
    {
      sum += a.at(i);
    }
    cout << sum << endl;
  }
  return 0;
}