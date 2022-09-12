//Matrix Addition and substruction using ARRAY

#include <stdio.h>

  int main()
{
  int i,j,rownum,colnum,a[10][10],b[10][10],c[10][10];
  printf("Enter the number of Row and Column: ");
  scanf("%d %d",&rownum,&colnum);
  
  for(i=0;i<rownum;i++)
    {
      for(j=0;j<colnum;j++)
        {
          printf("\n");
          printf("a[%d][%d]= ",i,j);
          scanf("%d", &a[i][j]);
        }
    }
     
  for(i=0;i<rownum;i++)
    {
      for(j=0;j<colnum;j++)
        {
          printf("\n");
          printf("b[%d][%d]= ",i,j);
          scanf("%d", &b[i][j]);
          ;
        }
    }
     
  for(i=0;i<rownum;i++)
    {
      for(j=0;j<colnum;j++)
        {
         c[i][j]= a[i][j] + b[i][j];
        }
    }
    
    printf("\n\nSummation of the two Matrixes is=  \n");
    
    
   for(i=0;i<rownum;i++)
    {
      for(j=0;j<colnum;j++)
        {
          printf("%d ",c[i][j]);
        }
        printf("\n");
    }
  return 0;
}