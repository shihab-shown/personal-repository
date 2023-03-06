#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 998244353

int main()
{
  fast
  ll a,b,c;
  cin>>a>>b>>c;
  ll ans0 = (a*(a+1)/2)%mod;
  ll ans1 = (b*(b+1)/2)%mod;
  ll ans2 = (c*(c+1)/2)%mod;
  ll ans = (ans0*ans1)%mod;
  cout<<(ans*ans2)%mod<<endl;

  return 0;
}