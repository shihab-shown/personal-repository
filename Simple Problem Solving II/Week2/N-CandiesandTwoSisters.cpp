#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll t,n,a,b,count;
  cin>>t;
  while (t--)
  {
    cin>>n;
    if ((n==1) || (n==2))
    {
      cout<<0<<"\n";
      continue;
    }
    cout<<((n-1)/2)<<"\n";
  }
  return 0;
}