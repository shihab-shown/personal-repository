#include <bits/stdc++.h>
using namespace std;
set<int>a;
set<int>::iterator itr;
int main()
{
  int n, x, y;
  cin>>n;
  while (n--)
  {
    cin>>y>>x;
    if (y==1) a.insert(x);
    else if (y==2) a.erase(x); 
    else if (y==3)
    {
      itr = a.find(x);
      if(itr==a.end())cout<<"No"<<endl;
      else cout<<"Yes"<<endl;
    }
  }
  return 0;
}