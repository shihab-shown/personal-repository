#include <bits/stdc++.h>
#define PI acos(-1)
using namespace std;
int main()
{
  int t, i;
  double length, width, radius, area1, area2;
  while (scanf("%d", &t) == 1)
  {
    for (i = 1; i <= t; i++)
    {
      scanf("%lf", &length);
      radius = length / 5;
      width = (length * 6) / 10;
      area1 = PI * radius * radius;
      area2 = (length * width) - area1;
      printf("%.2lf %.2lf\n", area1, area2);
    }
  }
  return 0;
}