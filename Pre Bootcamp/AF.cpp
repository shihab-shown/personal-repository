#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int n;
  cin>>n;
  while(n--)
  {
    ll a,b;
    cin>>a>>b;
    ll gcd = __gcd(a,b);
    ll lcm = (a*b)/gcd;
    cout<<gcd<<" "<<lcm<<endl;
  }
  return 0;
}