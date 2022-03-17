#include <stdio.h>
int main()
{
  int a,sum=0,temp;
  printf("Enter a number: ");
  scanf("%d",&a);
  for(int i=0; i<a; i++)
  {
    temp=(a-i)*(a-i);
    if(i%2==0)
    {
      sum=sum+temp;
    }
    else
    {
      sum=sum-temp;
    }
  }
  printf("The sum is: %d",sum);
  return 0;
}
