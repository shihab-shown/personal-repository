#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int t;
  cin>>t;
  set<int> st;
  while(t--)
  {
      int x;
      cin>>x;
      if(x==1)
      {
        int y;
        cin>>y;
        st.insert(y);
      }
      else if(x==2)
      {
        int y;
        cin>>y;
        st.erase(st.find(y));
      }
      else
      {
        cout<<*st.begin()<<"\n";
      }
  }
  return 0;
}