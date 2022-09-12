#include <stdio.h>
double factorial(int a);
int main()
{
  int T;
  scanf("%d",&T);
  int arr[T];
  for(int i=0; i<T; i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0; i<T; i++)
  {
    printf("%.0lf\n",factorial(arr[i]));
  }

  return 0;
}
double factorial(int a)
{
  double fact=1;
  if(a==0 || a==1)
  {
    return 1;
  }
  else
  {
    for(int i=1; i<=a; i++)
    {
      fact=fact*i;
    }
  }
  return fact;
}