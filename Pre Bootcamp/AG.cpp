#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  ll max = 1000001;
  vector<bool> v(max, false);
  for(int i=1; i<=max; i++)
  {
    int n = i;
    int sum = 0;
    while(n)
    {
      sum += n%10;
      n /= 10;
    }
    if(sum+i <= max)
      v[sum+i] = true;
  }
  for(int i=1; i<=max; i++)
  {
    if(!v[i])
      cout << i << endl;
  }
  return 0;
}