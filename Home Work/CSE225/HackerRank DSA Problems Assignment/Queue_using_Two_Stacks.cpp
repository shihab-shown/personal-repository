#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int q;
  cin>>q;
  queue<int> Q;
  while(q--)
  {
    int type;
    cin>>type;
    if(type==1)
    {
      int x;
      cin>>x;
      Q.push(x);
    }
    else if(type==2)
    {
      Q.pop();
    }
    else
    {
      cout<<Q.front()<<endl;
    }
  }
  return 0;
}