#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  map<int,int> m;
  vector<int> v;
  int x;
  while(cin>>x)
  {
    if(m.count(x)==0)
    {
      v.push_back(x);
      m[x]=1;
    }
    else
    {
      m[x]++;
    }
  }
  for (int i = 0; i < v.size(); i++)
  {
    cout<<v[i]<<" "<<m[v[i]]<<"\n";
  }
  
  
  return 0;
}