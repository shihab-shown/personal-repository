#include <stdio.h>

int main()
{
  int i,j,rownum,colnum,a[10][10],sum=0;
  printf("Enter the Row and Column of the Matrix: ");
  scanf("%d %d",&rownum,&colnum);

  //Inputing the elements of Matrix
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
          if(i==j)
          {
            sum=sum+a[i][j]; 
          }
        }
        printf("\n");
    }
    
    printf("SUM is %d",sum);

    return 0;
}