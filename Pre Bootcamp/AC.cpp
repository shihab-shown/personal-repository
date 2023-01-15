#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int n;
  cin>>n;
  set<int> s;
  int x;
  while(n--)
  {
    cin>>x;
    if (x==1)
    {
      int y;
      cin>>y;
      s.insert(y);
    }
    else if (x==2)
    {
      int y;
      cin>>y;
      s.erase(y);
    }
    else if (x==3)
    {
      int y;
      cin>>y;
      if (s.find(y)!=s.end())
      {
        cout<<"Yes"<<endl;
      }
      else
      {
        cout<<"No"<<endl;
      }
    }
  }
  return 0;
}