#include <stdio.h>
int main()
{
  int a,sum=0,temp;
  scanf("%d",&a);
  for(int i=0; i<a; i++)
  {
    temp= (a-i)*(a-i);
    if(i%2==0)
    {
      sum=sum+temp;
    }
    else
    {
      sum=sum-temp;
    }
  }
  printf("%d",sum);
  return 0;
}