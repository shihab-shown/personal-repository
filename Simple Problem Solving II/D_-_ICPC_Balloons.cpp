#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int t;
  cin>>t;
  while(t--)
  {
    int n,count = 0;
    cin>>n;
    string s;
    cin>>s;
    map<int, char> f;
    for(int i = 0; i < n; i++)
    {
      if(f.count(s[i]) == 0)
      {
        f[s[i]] = 1;
        count+=2;
      }
      else
      {
        count++;
      }
    }
    cout<<count<<"\n";
  }
  return 0;
}