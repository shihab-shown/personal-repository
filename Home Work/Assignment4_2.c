#include <stdio.h>
void listNumbersAsc();
int main()
{
  int start,end;
  printf("Enter the start and end value: ");
  scanf("%d %d",&start,&end);
  listNumbersAsc(start,end);
return 0;
}
void listNumbersAsc(int start ,int end)
{
  for(int i=start; i<=end; i++)
  {
    printf("%d ",i);
  }
}