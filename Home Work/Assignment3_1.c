#include <stdio.h>
#include <math.h>
int main()
{
  int x;
  double result;
  printf("Enter the value of x: ");
  scanf("%d",&x);
  result=sqrt(pow(x,3)+pow(x,2)-(12*x)-12);
  printf("%lf",result);
return 0;
}