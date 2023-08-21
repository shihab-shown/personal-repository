#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>a;
int main()
{
  ll n, k, i;
  cin>>n>>k;
  for (i = 1; i*i <= n; i++)
  {
    if (n%i == 0)
    {
      a.push_back(i);
      if (n/i!= i)
      {
        a.push_back(n/i);
      }
    }
  }
  sort(a.begin(), a.end());
  if(a.size()<k){
    cout<< -1 <<"\n";
  } else
  {
    cout<< a.at(k-1)<<"\n";
  }
  return 0;
}