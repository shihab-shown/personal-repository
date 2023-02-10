#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  vector<ll> v;
  ll n,sum=0;
  for (int i = 0; i < 5; i++)
  {
    cin>>n;
    v.push_back(n);
    sum+=n;
  }
  sort(v.begin(),v.end());
  cout<<sum-v[4]<<" "<<sum-v[0]<<endl;
  return 0;
}