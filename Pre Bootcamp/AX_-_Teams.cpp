#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD 1000000007

ll bigmod(ll a, ll b)
{
  ll m = 1;
  while(b)
  {
    if(b % 2!=0) m = m * a % MOD;
    a = a * a % MOD;
    b /= 2;
  }
  return m;
}

int main()
{
  fast
  int t, n, i=1;
  cin>>t;
  while (i<=t)
  {
    cin>>n;
    printf("Case #%d: %lld\n",i,n * bigmod(2,n - 1) % MOD);
    i++;
  }
  return 0;
}