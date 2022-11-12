// You're programming a backgammon game, and are working on the dice roll method. Given two ints, return their sum. However, if the two numbers are the same, return double their sum.

#include <stdio.h>

  int main()
{
  int a,b,sum;
  printf("Enter two numbers: \n");
  scanf("%d %d",&a,&b);
  sum=a+b;
  if (a==b)
  {
    sum=sum*2;
  }
  printf("Sum is %d",sum);

  return 0;
}
