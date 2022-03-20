#include <stdio.h>
int sumOfDigits();
int main()
{
  int num;
  scanf("%d",&num);
  printf("%d",sumOfDigits(num));
return 0;
}
int sumOfDigits(int x)
{
  int sum=0,rem=1;
  while(rem!=0)
  {
    rem=x%10;
    x=x/10;
    sum+=rem;
  }
  return sum;
}