#include <stdio.h>
#include <math.h>

int main()
{
  long long a, b, c;
  while (scanf("%lld %lld %lld", &a, &b, &c) == 3)
  {
    double ans3, ans2, ans1;
    double r, R, s = (a + b + c) / 2.0;
    ans2 = sqrt(s * (s - a) * (s - b) * (s - c));
    r = ans2 * 2 / (double)(a + b + c);
    ans3 = r * r * acos(-1);
    R = a * b * c / 4.0 / ans2;
    ans1 = R * R * acos(-1) - ans2;
    ans2 -= ans3;
    printf("%.4lf %.4lf %.4lf\n", ans1, ans2, ans3);
  }
  return 0;
}