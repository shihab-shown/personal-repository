/* Online Problem
Read 3 floating-point numbers. After, print the roots of 
bhaskara’s formula. If it's impossible to calculate the 
roots because a division by zero or a square root of a
negative number, presents the message “Impossible to calculate”.
*/

#include <stdio.h>
#include <math.h>

int main()
{
  double a,b,c,temp,x1,x2;
  printf("Enter the value of a:\n");
  scanf("%lf",&a);
  printf("Enter the value of b:\n");
  scanf("%lf",&b);
  printf("Enter the value of c:\n");
  scanf("%lf",&c);
  temp=(b*b)-(4*a*c);

  if(temp>=0 && a!=0)
  {
    x1=(-b+sqrt(temp))/(2*a);
    x2=(-b-sqrt(temp))/(2*a);

    printf("x1=%.4lf\n",x1);
    printf("x2=%.4lf",x2);
  }
  else
  {
    printf("IMPOSSIBLE TO CALCULATE");
  }
return 0;
}