#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<string>s;
map<string, string> f;
int main()
{
  int t;
  string n;
  cin>>t;
  while (t--)
  {
    cin>>n;
    if (f.count(n) == 0)
    {
      s.push_back(n);
      f[n] = 1;
    }
    else
    {
      f[n];
    }
  }
  for (int i = 0; i < s.size(); i++)
  {
    cout<<s[i]<<" "<<f[s[i]]<<"\n";
  }
  
  return 0;
}