#include <stdio.h>
int main()
{
  int a,b,c,tmp1,tmp2;
  printf("Enter the values of three intergers: ");
  scanf("%d %d %d",&a,&b,&c);
  tmp1=a;
  tmp2=b;
  b=tmp1;
  a=c;
  c=tmp2;
  printf("%d  %d  %d",a,b,c);
  return 0;
}