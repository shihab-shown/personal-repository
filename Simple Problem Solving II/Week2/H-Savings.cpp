#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ll n, sum = 0, count = 0;
  cin>>n;
  while (n>sum)
  {
    sum += count;
    count++;
  }
  cout<<(count -1)<<"\n";
  return 0;
}