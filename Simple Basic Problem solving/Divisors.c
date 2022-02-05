// Online problem
// Read an integer N and compute all its divisors.

#include <stdio.h>

int main()
{
  int a,b;
  printf("Enter the number: ");
  scanf("%d",&a);
  if(a<=0)
  {
    printf("Invalid");
  }
  else
  {
      for(b=1;b<=a;b++)
    {
      if(a%b==0)
      {
        printf("%d\n",b);
      }
    }
  }
return 0;
}