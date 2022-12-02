#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n,ct=0;
  string s,p;
  cin>>n>>s>>p;
  for (int i = 0; i < n; i++)
  {
    if (abs(s[i] - p[i]) < 6)
    {
      ct+= abs(s[i] - p[i]);
    }
    else
    {
      ct += 10 - abs(s[i] - p[i]);
    }
    
  }
   cout<<ct<<"\n";
  return 0;
}