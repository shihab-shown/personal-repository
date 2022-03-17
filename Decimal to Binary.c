#include <stdio.h>
long tobin();
int main()
{
  int dec;
  long bin;
  scanf("%d",&dec);
  bin= tobin(dec);
  printf("%ld",bin);
return 0;
}
long tobin(int dec)
{
  int rem,f=1;
  long sum=0;
  while (dec!=0)
  {
    rem=dec%2;
    sum=sum+rem*f;
    f*=10;
    dec=dec/2;
  }
  return sum;  
}