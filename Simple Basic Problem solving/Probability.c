#include <stdio.h>
int check(int n)
{
  while (n > 0)
  {
    if (n % 10 == 0)
      return 1;
    n /= 10;
  }
  return 0;
}
int main()
{
  int t, a, b;
  scanf("%d", &t);
  while(t--)
  {
    scanf("%d %d",&a, &b);
    int count=0;
    int i = a;
    while (i <= b)
    {
      if (i == 0)
        count++;
      if (check(i))
        count++;
      i++;
    }
    printf("%d/%d\n", count, ((b - a) + 1));
  }

  return 0;
}