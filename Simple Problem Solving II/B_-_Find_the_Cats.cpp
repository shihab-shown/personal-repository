#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int a,b,x;
  cin>>a>>b>>x;
  if (a+b>=x && a<=x)
  {
    cout<<"YES";
  }
  else
  {
    cout<<"NO";
  }
  return 0;
}