#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int n;
  cin>>n;
  while(n--)
  {
    ll s,d;
    cin>>s>>d;
    if(s<d || (s+d)%2!=0)
    {
      cout<<"impossible"<<endl;
    }
    else
    {
      ll a=(s+d)/2;
      ll b=(s-d)/2;
      cout<<a<<" "<<b<<endl;
    }
  } 
  return 0;
}