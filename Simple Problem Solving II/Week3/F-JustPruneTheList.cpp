#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int t,n,m,input,ans;
  cin>>t;
  while (t--)
  {
    cin>>n>>m;
    map<int ,int>mp;
    for (int i = 0; i < n; i++)
    {
      cin>>input;
      mp[input]++;
    }
    for (int i = 0; i < m; i++)
    {
      cin>>input;
      mp[input]--;
    }
    ans = 0;
    for (auto i = mp.begin(); i != mp.end() ; i++)
    {
      ans += abs(i->second);
    }
    cout<<ans<<"\n";
  }
  
  return 0;
}