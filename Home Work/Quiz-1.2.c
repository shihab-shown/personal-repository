#include <stdio.h>
int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  switch (c)
  {
  case 1:
    printf("%d",a*b);
    break;
  case 2:
    if(b==0)
    {
      printf("Error");
    }
    else
    {
      printf("%d",a/b);
    }
  default:
    printf("invalid input");
    break;
  }
return 0;
}