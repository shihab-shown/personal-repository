#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long int bigmod(long long int a, int b){
  long long int m = 1;
    while(b){
        if(b % 2!=0) m = m * a % MOD;
        a = a * a % MOD;
        b /= 2;
    }
    return m;
}
int main()
{
  int t, n, i=1;
  cin>>t;
  while (i<=t)
  {
    cin>>n;
    printf("Case #%d: %lld\n",i,n * bigmod(2,n - 1) % MOD);
    i++;
  }
  return 0;
}