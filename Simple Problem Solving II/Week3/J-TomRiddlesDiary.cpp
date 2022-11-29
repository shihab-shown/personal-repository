#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<string>s;
map<string, int> f;
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
      cout<<"NO"<<"\n";
      f[n] = 1;
    }
    else
    {
      cout<<"YES"<<"\n";
    }
  }
  return 0;
}
