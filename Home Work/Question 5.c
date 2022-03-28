#include <stdio.h>
int main()
{
  int num,pos,a=10000;
  scanf("%d",&num);
  scanf("%d",&pos);
  switch (pos)
  {
  case 1:
    num/=a;
    break;
  case 2:
    num%=a;
    a=1000;
    num/=a;
    break;
  case 3:
    for(int i=1; i<=2;i++)
    {
      num%=a;
      a/=10;
    }
    num/=a;
    break;  
  case 4:
    for(int i=1; i<=3;i++)
    {
      num%=a;
      a/=10;
    }
    num/=a;
    break;  
  case 5:
    for(int i=1; i<=4;i++)
    {
      num%=a;
      a/=10;
    }
    num/=a;
    break;  
  default:
    printf("INVALID");
    break;
  }
  printf("%d",num);
  return 0;
}