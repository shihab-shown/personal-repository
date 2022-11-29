#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<int, int> a;
int main()
{
  int n, ct = 1,input;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    cin>>input;
    a[input]++;
  }
  int temp;  
  for (auto i = a.begin(); i != a.end(); i++)
  {
    temp = i->second;
    ct = max(ct,temp);
  }
  cout<<ct<<"\n";
  return 0;
}