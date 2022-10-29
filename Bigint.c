#include <stdio.h>
int main()
{
  char a[10] = "15";
  char b[10] = "17";
  char c[10];
  int d, e; 
  for (int i = 1; i>= 0; i--)
  { 
    d = a[i] + b[i] - 96;
    if (d > 10)
    {
      c[i] = 48 + (d % 10);
      c[i - 1] = 48 + (d / 10);
      c[i + 1] = '\0';
    }
    else
    {
      c[i] += d;
    }
  }

  printf("%d\n", d);
  printf("%s\n", c);
  return 0;
}