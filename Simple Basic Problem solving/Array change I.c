// Write a program that reads an array N [20]. 
// After, change the first element by the last, 
// the second element by the last but one, etc.., 
// Up to change the 10th to the 11th. print the modified array.

#include <stdio.h>
int main()
{
  int a,b,c=1,temp;
  printf("Enter the range: ");
  scanf("%d",&a);
  int N[a],X[a];
  for(int i=0;i<a;i++)
    {
      printf("Enter N[%d]= ",i+1);
      scanf("%d",&N[i]);
    }
  b=a;
  for(int i=0;i<a;i++)
    {
      b--;
      X[b]=N[i];  
    }
   printf("\n\n");

  for(int i=0;i<a;i++)
    {
      printf("N[%d]= %d\n",i+1,X[i]);
    }
return 0;
}