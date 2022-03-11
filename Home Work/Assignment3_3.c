#include <stdio.h>

int main()
{
  char ch;
  printf("Enter a letter ");
  scanf("%c",&ch);
  if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
  {
    if(ch=='Z')
    {
      printf("Next letter is %c",ch+7);
    }
    else
    {
      printf("Next letter is %c",ch+1);
    }
  }  
  else
    printf("This is not a letter");
  return 0;
}