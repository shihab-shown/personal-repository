//Matrix Multiplication using ARRAY

#include <stdio.h>
#include <stdlib.h>

  int main()
{
  int i,j,rownum1,rownum2,colnum1,colnum2,a[10][10],b[10][10],c[10][10],k,sum=0;
  
  printf("Enter the number of Row and Column of first Matrix: ");
  scanf("%d %d",&rownum1,&colnum1);

  printf("Enter the number of Row and Column of second Matrix: ");
  scanf("%d %d",&rownum2,&colnum2);

  if(colnum1 != rownum2)
  {
    printf("ERROR! \a");
    return 0;
  }

  for(i=0;i<rownum1;i++)
    {
      for(j=0;j<colnum1;j++)
        {
          printf("\n");
          printf("a[%d][%d]= ",i,j);
          scanf("%d", &a[i][j]);
        }
    }
     
  for(i=0;i<rownum2;i++)
    {
      for(j=0;j<colnum2;j++)
        {
          printf("\n");
          printf("b[%d][%d]= ",i,j);
          scanf("%d", &b[i][j]);
          ;
        }
    }

    for(i=0;i<rownum1;i++)
    {
      for(j=0;j<colnum2;j++)
      {
        for(k=0;k<colnum1;k++)
          {
            sum= sum+ a[i][k] * b[k][j];
          }
        c[i][j]=sum;
        sum=0;
      }
    } 
    
    printf("\n\nMultiplication of the two Matrixes is= \n");
    
    for(i=0;i<rownum1;i++)
    {
      for(j=0;j<colnum2;j++)
        {
          printf("%d ",c[i][j]);
        }
        printf("\n");
    }

  return 0;
}