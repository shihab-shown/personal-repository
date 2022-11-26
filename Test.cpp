#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int>v;  
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.push_back(6);
  cout<<*prev(v.end())<<"\n";
  return 0;
}