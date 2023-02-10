#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  ll num,n,rem=0,rev=0;
  cin>>num;
  n=num;
  while(n!=0)
  {
    rem=n%10;   
    rev=rev*10+rem;
    n=n/10;
  }
  cout<<rev;
  return 0;
}