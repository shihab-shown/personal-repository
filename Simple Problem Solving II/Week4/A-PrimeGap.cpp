#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<bool> isPrime;
vector<int> Prime;
void sieve(ll b)
{
  isPrime.assign(b + 1, true);
  isPrime[0] = isPrime[1] = false;
  for (ll i = 2; i <= b; i++)
  {
    if (isPrime[i])
    {
      Prime.push_back(i);
      for (ll j = i * i; j <= b; j += i)
      {
        isPrime[j] = false;
      }
    }
  }
}
int main()
{
  int n;
  sieve(1299709);
  while (cin>>n && n!=0)
  {
    for (int i = 0; i <= n; i++)
    {
      if (Prime[i] == n)
      {
        cout<<0<<"\n";
        break;
      }
      else if(Prime[i]>n)
      {
        cout<<(Prime[i] - Prime[i-1])<<"\n";
        break;
      }
    }
    
  }
  
  
  return 0;
}