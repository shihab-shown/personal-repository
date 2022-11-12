// You're writing a program to play a variety of BlackJack. In general, given two numbers, a and b, return their sum.

// If the sum is greater than 21, return 0, unless one of the numbers is 11. In such a case, the 11 should be 'converted' to a 1 to prevent the sum from being exceeded.

#include <stdio.h>

  int main()
{
  int a, b, sum,c=1;
  printf("Enter the value of a & b: \n");
  scanf("%d %d", &a, &b);
  if(a==11)
  {
    a=c;
  }
  if(b==11)
  {
    b=c;
  }
  sum=a+b;
  if(sum>21)
  {
    return 0;
  }
  else
  {
    printf("Sum= %d",sum);
  }
  
  return 0;
}