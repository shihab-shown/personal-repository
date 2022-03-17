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
  int res=x;
  while(rem!=0)
  {
    rem=res%10;
    res=res/10;
    sum+=rem;
  }
  return sum;
}