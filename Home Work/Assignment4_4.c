#include <stdio.h>
float harmonicSum();
int main()
{
  int n;
  scanf("%d",&n);
  printf("%.2f",harmonicSum(n));
return 0;
}
float harmonicSum(int n)
{
  float sum=0;
  for(int i=1; i<=n; i++)
  {
    sum+=(1.0/i);
  }
  return sum;
}