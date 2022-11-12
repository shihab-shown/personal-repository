#include <stdio.h>
long long int nc2(long long int n){
  if(n < 2) return 0;
  return ((n*(n-1))/2);
}
int main()
{
  long long int n, m;
  scanf("%lld %lld",&n, &m);
  long long int max = nc2((n-m+1));
  long long int min = (m - n % m) * (nc2(n/m)) + (n % m) * (nc2(n/m + 1));
  printf("%lld %lld\n",min ,max);
  return 0;
}