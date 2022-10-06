#include <stdio.h>
int main()
{
  int a,sum=0,tmp;
  printf("Enter a number: ");
  scanf("%d",&a);
  for(int i=0; i<a; i++)
  {
    tmp=(a-i)*(a-i);
    if(i%2==0)
    {
      sum+=tmp;
    }
    else
    {
      sum-=tmp;
    }
  }
  printf("The sum is: %d",sum);
  return 0;
}
