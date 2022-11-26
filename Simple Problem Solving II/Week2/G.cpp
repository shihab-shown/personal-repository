#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int sum(ll n){
  int sum = 0;
  while (n!=0)
  {
    sum += n%10;
    n/=10;
  }
  return sum;
}
int main()
{
  ll n;
  cin>>n;
  int s = sum(n);
  if (n%s == 0)
  {
    cout<<"Yes"<<"\n";
  }
  else
  {
    cout<<"No"<<"\n";
  }
  return 0;
}