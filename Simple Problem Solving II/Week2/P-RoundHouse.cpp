#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll n,a,b,sum;
  cin>>n>>a>>b;
  b=b%n;
  if (b<0)
  {
    sum = n+a+b;
  }
  else
  {
    sum = a+b;
  }
  if (sum%n==0)
  {
    cout<<n<<"\n";
  }
  else
  {
    cout<<sum%n<<"\n";
  }
  
  return 0;
}