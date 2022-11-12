#include <stdio.h>
void listNumbersDesc();
int main()
{
  int start,end;
  printf("Enter the start and end value: ");
  scanf("%d %d",&start,&end);
  if(start>end)
  {
    int tmp=start;
    start=end;
    end=tmp;
  }
  listNumbersDesc(start,end);
  return 0;
}
void listNumbersDesc(int start ,int end)
{
  for(int i=end; i>=start; i--)
  {
    printf("%d ",i);
  }
}