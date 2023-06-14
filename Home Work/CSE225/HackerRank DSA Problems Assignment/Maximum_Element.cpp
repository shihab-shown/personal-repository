#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int n;
  cin>>n;
  stack<int> s;
  stack<int> max;
  max.push(INT_MIN);
  while(n--)
  {
    int q;
    cin>>q;
    if(q==1)
    {
      int x;
      cin>>x;
      s.push(x);
      if(x>=max.top())
        max.push(x);
    }
    else if(q==2)
    {
      if(s.top()==max.top())
        max.pop();
      s.pop();
    }
    else
      cout<<max.top()<<endl;
  }
  return 0;
}