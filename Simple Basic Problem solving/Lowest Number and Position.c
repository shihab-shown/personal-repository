// Write a program that reads a number N. This N is the size of a array X[N]. 
// Next, read each of the numbers of X, find the smallest element of this array 
// and its position within the array, printing this information.

#include <stdio.h>

int main()
{
  int N, low, pos,b;
  printf("Enter how many number: ");
  scanf("%d", &N);
  int X[N];

  for (int i = 0; i < N; i++)
  {
    printf("Enter X[%d]= ", i+1);
    scanf("%d", &X[i]);
  }
  low = X[0];
  pos = 0;
  for (int i = 1; i < N; i++)
  {
    if (low > X[i])
    {
      low = X[i];                  
      pos=i+1;                    
    }
  }
  printf("Lowest number is %d\n", low);
  printf("Position: %d", pos);
  
 return 0;
}