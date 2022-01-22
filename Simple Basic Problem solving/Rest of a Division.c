// Online Problem
// Write a program that reads two integer numbers X and Y. 
// Print all numbers between X and Y which dividing it 
// by 5 the rest is equal to 2 or equal to 3.
#include <stdio.h>

int main()
{
  int x,y,num;
  printf("Enter the Value of X= ");
  scanf("%d",&x);
  printf("Enter the Value of Y= ");
  scanf("%d",&y);
  num=x+1;
  while(num<y)
  {
  if(num%5==2 || num%5==3)
  {
    printf("%d  ",num);
  }
  num++;
  }
return 0;
}