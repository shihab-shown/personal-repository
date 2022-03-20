#include <stdio.h>
double harmonicSum();
int main()
{
  int n;
  scanf("%d",&n);
  printf("%.2lf",harmonicSum(n));
return 0;
}
double harmonicSum(int n)
{
  double sum=0;
  for(int i=1; i<=n; i++)
  {
    sum+=(1.0/i);
  }
  return sum;
}