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
    ll n;
    cin>>n;
    int count = -1;
    while (1)
    {
      if(n==1)
      {
        count++;
        break;
      }
      if(n%2==0)
      {
        n=n/2;
        count++;
      }
      else if(n%3==0)
      {
        n=(2*n)/3;
        count++;
      }
      else if(n%5==0)
      {
        n=(4*n)/5;
        count++;
      }
      else
      {
        count = -1;
        break;
      }
    }
    cout<<count<<"\n";
  }
  return 0;
}