#include <stdio.h>
#include <string.h>
int main()
{
  char str[100],search[100],temp[100];
  int i=0,j=0,count=0;
  printf("Input string: ");
  scanf(" ");
  fgets(str,100,stdin);
  str[strlen(str)-1]='\0';
  printf("Input word to search: ");
  scanf(" ");
  fgets(search,100,stdin);
  search[strlen(search)-1]='\0';
  while (str[i]!=)
  {
    while(str[j]!=" ")
    {
      temp[j]=str[j];
      j++;
    }
    temp[j]='\0';
    if(strcmp(search,temp)==0)
    {
      count++;
    }
  }
  
  return 0;
}