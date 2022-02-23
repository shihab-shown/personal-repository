// This is a quiz problem from a different section of CSE115

#include <stdio.h>
int main()
{
  int N;
  printf("Enter the amount you want to withdraw: ");
  scanf("%d",&N);
  if(N>=500)
  {
    if(N%500==0)
    {
      if(N<=20000)
      {
        if(N%50==0)
        {
          printf("TRANSICTION SUCCESSFUL");
        }
        else
        {
          printf("Error");
        } 
      }
      else
      {
        printf("EXCEEDED AMOUNT");
      }
    }
    else
    {
      printf("INVALID VALUE");
    }
  }
  else
  {
    printf("INVALID AMOUNT");
  }
return 0;
}