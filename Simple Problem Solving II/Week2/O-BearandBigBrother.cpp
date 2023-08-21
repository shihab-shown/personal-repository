#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int a,b,count=0;
  cin>>a>>b;
  if (a==b)
  {
    cout<<1<<"\n";
    return 0;
  }
  while (a<=b)
  {
    a*=3;
    b*=2;
    count++;
  }
  cout<<count<<"\n";
  return 0;
}