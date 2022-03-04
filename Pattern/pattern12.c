// Input-> 5
// 5 5 5 5 5 5 5 5 5
// 5 4 4 4 4 4 4 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 2 1 2 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 4 4 4 4 4 4 5
// 5 5 5 5 5 5 5 5 5

#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int len = 2*n-1;
  for(int row=0; row<len; row++)
  {
    for(int col=0; col<len; col++)
    {
      int min = row<col? row:col;
      min=min<len-row? min:len-row-1;
      min=min<len-col? min:len-col-1;
      printf("%d ",n-min);
    }
    printf("\n");
  }
  return 0;
}