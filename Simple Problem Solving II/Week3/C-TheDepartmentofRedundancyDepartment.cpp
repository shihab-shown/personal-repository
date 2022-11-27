#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>a;
map<int, int> f;
int main()
{
  int n;
  while (scanf("%d", &n) != EOF)
  {
    if (f.count(n) == 0)
    {
      a.push_back(n);
      f[n] = 1;
    }
    else
    {
      f[n]++;
    }
  }
  for (int i = 0; i < a.size(); i++)
  {
    cout<<a[i]<<" "<<f[a[i]]<<"\n";
  }
  
  return 0;
}