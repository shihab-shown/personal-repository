#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  ll n, k, count = 0;
  cin >> n >> k;
  while(n--)
  {
    ll x;
    cin >> x;
    if(x % k == 0)
      count++;
  }
  cout << count << endl;
  return 0;
}