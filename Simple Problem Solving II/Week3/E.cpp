#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int t,n;
  cin>>t;
  while (t--)
  {
    cin>>n;
    cout<<2<<" ";
    for (int i = 3; i <= n; i++)
    {
      cout<<i<<" ";
    }
    cout<<1<<"\n";
  }
  
  return 0;
}