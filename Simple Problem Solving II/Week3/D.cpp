#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n,ct= 0;
  cin>>n;
  for (int i = 1; i < n; i++)
  {
    if ((n/i)==(n%i))
    {
      ct++;
    }
  }
  cout<<ct<<"\n";
  return 0;
}