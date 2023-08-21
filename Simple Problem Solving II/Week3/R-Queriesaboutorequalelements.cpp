#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n,m;
  cin>>n>>m;
  vector<ll>a(n);
  vector<ll>b(m);
  for (auto &i : a)
  {
    cin>>i;
  }
  for (auto &i : b)
  {
    cin>>i;
  }
  sort(a.begin(), a.end());
  for (int i = 0; i < m; i++)
  {
    cout<<abs(distance(upper_bound(a.begin(),a.end(),b[i]),a.begin()))<<" ";
  }
  
  
  return 0;
}