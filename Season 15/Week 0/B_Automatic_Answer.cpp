#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    n*=567;
    n/=9;
    n+=7492;
    n*=235;
    n/=47;
    n-=498;
    n/=10;
    n%=10;
    if(n<0)
      n*=-1;
    cout << n << endl;
  }
  return 0;
}