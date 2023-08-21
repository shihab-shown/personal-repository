#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
set<ll>b;
void devisor(ll n){
  for (ll i = 2; i*i <= n; i++)
  {
    if (n%i == 0)
    {
      b.insert(i);
      if (n/i!= i)
      {
        b.insert(n/i);
      }
    }
  }
}
int main()
{
  ll t,n,d, result;
  bool p;
  cin>>t;
  while (t--)
  {
    cin>>n;
    vector<ll>a(n);
    for (auto &i : a)
    {
      cin>>i;
    }
    
    sort(a.begin(), a.end());
    result = (a[0]*a[n-1]);
    b.clear();
    devisor(result);
    p = true;
    if (b.size() == n) 
    {
      for (int i = 0; i < n; i++)
      {
        if (b.find(a[i]) != b.end())
          continue;
        p = false;
        break;
      }
    }
    else p = false;  
      if (p)
      {
        cout<<result<<endl;
      } else
      {
        cout<< -1 <<endl;
      }
    a.clear();
  }
  return 0;
}