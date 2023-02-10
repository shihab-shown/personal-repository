#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bigmod(ll a,ll b,ll c)
{
  if(b==0) return 1;
  ll x=bigmod(a,b/2,c);
  x=(x*x)%c;
  if(b%2==1)
  x=(x*a)%c;
  return x;
}
int main()
{
  ll a,b,c;
  while (cin >> a >> b >> c)
  {
    cout<<bigmod(a,b,c)<<"\n"; 
  }
  return 0;
}