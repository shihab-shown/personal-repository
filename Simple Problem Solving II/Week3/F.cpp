#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int t, a[3];
  cin >> t;
  while (t--)
  {
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if (a[1] != a[2])
    {
      cout << "NO" << "\n";
    }
    else
    {
      cout<<"YES"<<"\n";
      cout<<a[2]<<" "<<a[0]<<" "<<a[0]<<"\n";
    }
  }

  return 0;
}