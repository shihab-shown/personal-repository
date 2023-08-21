#include <stdio.h>
int main()
{
  int a[]={0,3,3,3,0,0,7,7,0,9};
  int b[sizeof(a)/sizeof(a[0])];
  printf("The given array is: ");
  for(int i=0; i<10; i++)
  {
    printf("%d ",a[i]);
  }
  printf("\n");
  for(int i=0; i<10; i++)
  {
    if(a[i]==a[i+1])
    {
      b[i]=0;
    }
    else
    {
      b[i]=(a[i]*2);
    }
  }
  int ctr = 0; 
  for (int i = 0; i < 10; i++) 
    if (b[i] != 0) 
    b[ctr++] = b[i]; 
    while (ctr < 10) 
    b[ctr++] = 0;
  printf("The new array is: ");
  for(int i=0; i<10; i++)
  {
    printf("%d ",b[i]);
  }
  return 0;
}