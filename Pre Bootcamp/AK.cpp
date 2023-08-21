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
  int m = *max_element(a,a+n);
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    a[i] = m - a[i];
    sum += a[i];
  }
  cout<<sum;
  return 0;
}