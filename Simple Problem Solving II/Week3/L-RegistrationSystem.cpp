#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string,int>m;
int main()
{
  int t;
  string s;
  cin>>t;
  while (t--)
  {
    cin>>s;
    if (m.count(s) == 0)
    {
      cout<<"OK"<<"\n";
      m[s]++;
    }
    else
    {
      cout<<s<<m[s]<<"\n";
      m[s]++;
    }
    
  }
  return 0;
}