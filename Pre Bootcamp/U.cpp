#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  ll a,b;
  cin>>a>>b;
  ll sum = a+b;
  if(sum%2 != 0)
  {
    cout<<"IMPOSSIBLE"<<endl;
  }
  else
  {
    cout<<sum/2<<endl;
  }
  return 0;
}