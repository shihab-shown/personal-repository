#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
  fast
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  for (int i = n; i > 0; i--)
  {
    if (a[i] > a[i-1])
    {
      a[i] = a[i] - a[i-1];
    }
  }
  sort (a, a+n);
  int x = n*__gcd(a[0],a[1]);
  cout<<x<<"\n";
  return 0;
}