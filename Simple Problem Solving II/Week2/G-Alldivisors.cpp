#include <bits/stdc++.h>
using namespace std;
vector<int>a;
int main()
{
  int n;
  cin>>n;
  for (int i = 1; i*i <= n; i++)
  {
    if (n%i == 0)
    {
      a.push_back(i);
      if (n/i!= i)
      {
        a.push_back(n/i);
      }
    }
  }
  sort(a.begin(), a.end());
  for(auto i : a)
    cout<<i<<" ";
  
  return 0;
}