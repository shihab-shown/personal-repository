//Transpose Matrix using ARRAY

#include <stdio.h>

int main()
{
  int i,j,rownum,colnum,a[10][10],b[10][10],c[10][10];
  printf("Enter the Row and Column of the Matrix: ");
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
      
      printf("\n\nThe Matrix is= \n");

     for(i=0;i<rownum;i++)
    {
      for(j=0;j<colnum;j++)
        {
          printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nTranspose of the Matrix is= \n");
    
    
     for(j=0;j<rownum;j++)
    {
      for(i=0;i<colnum;i++)
        {
          printf("%d ",a[i][j]);
        }
        printf("\n");
    }

return 0;
}
