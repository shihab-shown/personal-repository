#include <stdio.h>

int main()
{
  char ch;
  printf("Enter a letter ");
  scanf("%c",&ch);
  printf("Next letter is %c",ch+1);
  return 0;
}