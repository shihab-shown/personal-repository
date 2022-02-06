// Problem
// This program shows Perfect Numbers within a range.
#include <stdio.h>

int main()
{
  int num = 1, i, sum = 0, range, x;

  printf("Enter the Range= ");
  scanf("%d", &range);
  for (i = 1; i <= range; i++)
  {
    x = perfectnum(num);
    if (x != 0)
    {
      printf("%d\n", x);
      num++;
    }
    else
    {
      num++;
    }
  }
  return 0;
}
int perfectnum(int num)
{
  int i, sum = 0;
  for (i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      sum = sum + i;
      if (sum == num)
      {
        return num;
      }
      else
      {
        continue;
      }
    }
    else
    {
      continue;
    }
  }
  return 0;
}