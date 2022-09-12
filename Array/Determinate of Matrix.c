#include <stdio.h>
int main()
{
  int a[3][3];
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
      printf("a[%d][%d]",i+1,j+1);
      scanf("%d",&a[i][j]);
      printf("\n");
    }  
  }
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
      a[i][j]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2]));
    }
  }
  return 0;
}