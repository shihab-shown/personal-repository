#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int t,i,ct;
  string s;
  cin>>t;
  while (t--)
  {
    cin>>s;
    vector<int>v;
    i = 0,ct =0;
    while (i<s.length())
    {
      if (s[i] == '1')
      {
        ct++;
      }
      else
      {
        v.push_back(ct);
        ct= 0;
      }
      i++;
    }
    v.push_back(ct);
    sort(v.rbegin(), v.rend());
    ct=0;
    for (int i = 0; i < v.size(); i+=2)
    {
      ct+=v[i];
    }
    cout<<ct<<"\n";
  }
  return 0;
}