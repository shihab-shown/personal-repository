/* Online problem
Kostya has begun to look for occurrences of four anywhere. 
He has a list of T integers, for each of them he wants to 
calculate the number of occurrences of the digit 4 in the decimal representation.
*/
#include <stdio.h>

int main()
{
  int a,i;
  printf("Enter the value of A\n");
  scanf("%d",&a);
  int b[a];
  printf("Enter the numbers\n");
  for(i=0;i<a;i++)
    {
      printf("%d: ",i+1);
      scanf("%d",&b[i]);
    }
printf("\n\n");    
  for(i=0;i<a;i++)
    {
      printf("%d: ",i+1);
      printf("%d\n",lucyfour(b[i]));
    }
  
  
return 0;
}
int lucyfour(int num)
{
  int temp,r,count=0;
  r=num;
  while(temp!=0)
  {
  temp=r%10;
  r=r/10;
  if(temp==4)
  {
    count++;
  }
  }
  return count;
}