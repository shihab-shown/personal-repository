// https://www.beecrowd.com.br/judge/en/problems/view/1095
#include <stdio.h>
int main()
{
  int i=1,j=60;
  while(j!=0)
  {
    printf("i=%d  ",i);
    printf("j=%d\n",j);
    i+=3;
    j-=5;
  }
  printf("i=%d  ",i);
  printf("j=%d\n",j);
  return 0;
}