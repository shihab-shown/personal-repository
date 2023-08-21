#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll n, input;
  cin>>n;
  map<ll,ll>a;
  for (int i = 0; i < n; i++)
  {
    cin>>input;
    a[input]++;
  }
  ll ct = 0;
  for (auto i = a.begin(); i != a.end(); i++)
  {
    if (i->second > i->first)
    {
      ct += (i->second - i->first);
    }
    else if (i->second < i->first)
    {
      ct+= (i->second);
    }
  }
  cout<<ct<<"\n";
  return 0;
}