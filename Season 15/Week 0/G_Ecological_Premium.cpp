#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    ll sum=0;
    while(n--)
    {
      ll a,b,c;
      cin>>a>>b>>c;
      sum+=a*c;
    }
    cout<<sum<<endl;
  }
  return 0;
}