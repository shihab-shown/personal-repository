#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n;
  set<int>s;
  int a;
  cin>>n;
  while (n--)
  {
    cin>>a;
    s.insert(a);
  }
  sort(s.begin(), s.end());
  //cout<<*prev(s.end())<<"\n";
  return 0;
}