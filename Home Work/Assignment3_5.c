#include <stdio.h>
int main()
{
  int num1,num2,num3;
  printf("Enter number: ");
  scanf("%d",&num1);
  printf("Enter number: ");
  scanf("%d",&num2);
  printf("Enter number: ");
  scanf("%d",&num3);
  if(num1>=num2 && num1>=num3)
  {
    if(num2>=num3)
    {
      printf("Second largest is %d",num2);
    }
    else
    {
      printf("Second largest is %d",num3);
    }
  }
  else if(num2>=num1 && num2>=num3)
  {
    if(num1>=num3)
    {
      printf("Second largest is %d",num1);
    }
    else
    {
      printf("Second largest is %d",num3);
    }
  }
  else if(num1>=num2)
  {
    printf("Second largest is %d",num1);
  }
  else
  {
    printf("Second largest is %d",num2);
  }
  return 0;
}