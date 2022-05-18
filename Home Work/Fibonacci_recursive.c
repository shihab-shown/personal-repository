#include <stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  fibo(a);
  return 0;
}
int fibo(int a)
{
  if(a==1)
  {
    printf("0 ");;
  }
  else if (a==2)
  {
    printf("1 ");;
  }
  else
  {
    printf("%d",fibo(a-1));
  }
  
  
}