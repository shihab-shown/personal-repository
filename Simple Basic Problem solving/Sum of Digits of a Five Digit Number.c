// Online Problem
// https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?
#include <stdio.h>
int main()
{
  int num,i,rem,res,sum=0;
  scanf("%d",&num);
  res=num;
  for(i=1; i<=5; i++)
    {
      rem=res%10;
      res=res/10;
      sum+=rem;
    }
  printf("%d",sum);
  
return 0;
}