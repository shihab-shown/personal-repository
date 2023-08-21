// This program tells the factorial of a random number between 1-15
// Function, Recurtion and Random number program are used in this program

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main()
{
  int n;
  n=randnum();
  printf("The Factorial of %d is %d",n,fact(n));
  return 0;
}

fact(int n)
{
    int result=0;
    if(n==0 || n==1)
    {
      return 1;
    }
    else
    {
      result = n * fact(n-1);
      return result;
    }   
}

randnum()
{
  srand(time(0));
  int num=(rand()%15);
  return num;
}