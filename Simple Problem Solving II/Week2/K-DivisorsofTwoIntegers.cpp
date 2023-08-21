#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  vector<int>d;
  int n,a;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    cin>>a;
    d.push_back(a);
  }
  sort(d.rbegin(), d.rend());
  int x = *d.begin();
  cout<<x<<" ";
  for (auto i = 1; i < n; i++)
  {
    if (x%d[i] != 0)
    {
      cout<<d[i]<<"\n";
    }
  }
  return 0;
}