#include <stdio.h>
int main()
{
  int a,b,second,minitue,hour;
  printf("Input second: ");
  scanf("%d",&a);
  hour=a/3600;
  b=a%3600;
  minitue=b/60;
  second=b%60;
  printf("%d hours %d minitues %d seconds.",hour,minitue,second);
  return 0;
}