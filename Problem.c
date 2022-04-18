#include <stdio.h>
int main()
{
  char sentence[20],str[]="Hello World";
  int i=0;
  fgets(sentence, 20, stdin);
  while(sentence[i]!='\0')
  {
    i++;
  }
  printf("%d\n",i-1);
  i=0;
  while(str[i]!='\0')
  {
    i++;
  }
  printf("%d",i);
  return 0;
}