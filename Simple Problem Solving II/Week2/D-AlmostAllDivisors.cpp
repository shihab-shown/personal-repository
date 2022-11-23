#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>b;
void devisor(ll n){
  for (int i = 1; i*i <= n; i++)
  {
    if (n%i == 0)
    {
      b.push_back(i);
      if (n/i!= i)
      {
        b.push_back(n/i);
      }
    }
  }
  sort(b.begin(), b.end());
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
    devisor(result);
    if (b.size() == (n+2)) 
    {
      p = true;
      for (int i = 0; i < n; i++)
      {
        if (a.at(i) != b.at(i+1))
        {
          p = false;
          break;
        }
      }
      if (p)
      {
        cout<<result<<endl;
      } else
      {
        cout<< -1 <<endl;
      }
    } else
    {
      cout<< -1<<endl;
    }
    b.clear();
    a.clear();
  }
  return 0;
}