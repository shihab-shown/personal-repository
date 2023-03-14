#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int t;
  cin>>t;
  while(t--)
  {
    ll n,k;
    cin>>n>>k;
    ll ans = ((k*n)-1)/(n-1);
    cout<<ans<<endl;
  }
  return 0;
}