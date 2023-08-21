#include <stdio.h>
int main()
{
  long a,b,sum=0,result;
  scanf("%ld %ld",&a,&b);
  sum=(a+b);
  result=sum/2;
  if(sum%2==0)
  {
    printf("%ld",result);
  }
  else
  {
    printf("IMPOSSIBLE");
  }
  return 0;
}