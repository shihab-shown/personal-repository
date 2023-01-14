#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  ll x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;
  ll x=abs(x1-x2);
  ll y=abs(y1-y2);
  cout << max(x,y) << endl;
  return 0;
}