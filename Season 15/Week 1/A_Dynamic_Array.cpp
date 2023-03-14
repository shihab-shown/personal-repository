#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int n,q;
  cin>>n>>q;
  vector<vector<ll>> arr(n);
  vector<int> ans;
  int query,x,y,lastAnswer=0;
  while(q--)
  {
    cin>>query>>x>>y;
    if(query==1)
    {
      int index=(x^lastAnswer)%n;
      arr[index].push_back(y);
    }
    else
    {
      int index=(x^lastAnswer)%n;
      lastAnswer=arr[index][y%arr[index].size()];
      ans.push_back(lastAnswer);
    }
  }
  for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<endl;
  return 0;
}