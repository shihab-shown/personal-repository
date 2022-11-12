// Online Problem
// Read an integer N that is the number of test cases that follows. Each test case contains two integers X and Y. Print one output line for each test case that is the sum of Y odd numbers from X including it if is the case. For example:
// for the input 4 5, the output must be 45, that is: 5 + 7 + 9 + 11 + 13
// for the input 7 4, the output must be 40, that is: 7 + 9 + 11 + 13

#include <stdio.h>

int main()
{
  int a,b,c,i,sum=0;
  printf("Enter how many line: ");
  scanf("%d",&a);
  for(i=0;i<a;i++)
    {
      printf("Entre initial Odd number: ");
      scanf("%d",&b);
      printf("How odd number you want to sum: ");
      scanf("%d",&c);
          
    printf("Sum is= %d\n",odd(b,c));
    }
  
return 0;
}
int odd(int b, int c)
{
  int i,sum=0;
  if(b%2!=0)
  {
   for(i=0;i<c;i++)
    {
       sum=sum+b;
       b=b+2;
    }
  }
  else
  {
    b++;
    for(i=0;i<c;i++)
    {
      sum=sum+b;
      b=b+2;
    }
  }
  return sum;
}