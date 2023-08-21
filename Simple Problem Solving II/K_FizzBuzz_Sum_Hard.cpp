#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  ll n,a,b;
  cin>>n>>a>>b;
  ll sum=0;
  sum = (n*(n+1))/2;
  ll lcm = (a*b)/__gcd(a,b);
  ll sum1 = (n/a)*(n/a+1)/2;
  ll sum2 = (n/b)*(n/b+1)/2;
  ll sum3 = (n/lcm)*(n/lcm+1)/2;
  cout<<sum-(sum1*a+sum2*b-sum3*lcm);
  return 0;
}