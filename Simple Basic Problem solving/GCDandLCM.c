#include <stdio.h>
long long int gcd(long long int a, long long int b);
long long int main()
{
  int n;
  scanf("%d",&n);
  long long int a[n], b[n] , lcm, g;
  for(int i=0; i<n; i++)
  {
    scanf("%lld %lld",&a[i],&b[i]);
  }
  for(int i=0; i<n; i++)
  {
    g = gcd(a[i],b[i]);
    lcm = (a[i]*b[i])/g;
    printf("%lld %lld\n",g,lcm);
  }
  
  return 0;
}
long long int gcd(long long int a, long long int b){
  if(a%b==0) return b;
  return gcd(b,a%b);
}