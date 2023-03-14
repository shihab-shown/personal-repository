#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  ll a,b,x,y;
  cin>>a>>b>>x>>y;
  ll g=__gcd(x,y);
  x/=g;
  y/=g;
  cout<<min(a/x,b/y)<<endl;
  return 0;
}