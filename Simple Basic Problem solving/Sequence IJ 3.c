// https://www.beecrowd.com.br/judge/en/problems/view/1097
#include <stdio.h>

int main()
{
  int j,tmp=7;
  for(int i=1; i<=9; i+=2)
  {
    for(int j=tmp; j>=(tmp-2); j--)
    {
      printf("i=%d  ",i);
      printf("j=%d\n",j);
    }
    tmp+=2;
  }
return 0;
}