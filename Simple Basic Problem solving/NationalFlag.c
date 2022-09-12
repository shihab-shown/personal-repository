#include <stdio.h>
#include <math.h>
int main()
{
  int t, i;
  double length, width, radius, a1, a2 , pi = acos(-1);
  while (scanf("%d", &t) == 1)
  {
    for (i = 1; i <= t; i++)
    {
      scanf("%lf", &length);
      radius = length / 5;
      width = (length * 6) / 10;
      a1 = pi * radius * radius;
      a2 = (length * width) - a1;
      printf("%.2lf %.2lf\n", a1, a2);
    }
  }
  return 0;
}