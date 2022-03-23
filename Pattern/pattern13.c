// #include <stdio.h>

//   int main()
// {
//   int row, col,n,pas=1;
//   printf("Enter N: ");
//   scanf("%d",&n);
//   for(row=1; row<=n; row++)
//   {
//     for (col = 1; col<=n-row; col++)
//     {
//       printf(" ");
//     }
//     for(col=1; col<= (2*row)-1; col++)
//     {
//       if(row==1 || col==1 || ((2*row)-1)==col)
//       {
//         pas=1;
//       }
//       else
//       {
//         pas = (pas * (row - col +1) / col);
//       }

//       printf("%d",pas);
//     }
//     printf("\n");
//   }
//   return 0;
// }

#include <stdio.h>
int main()
{
  int rows, coef = 1, space, i, j;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  for (i = 0; i < rows; i++)
  {
    for (space = 1; space <= rows - i; space++)
      printf(" ");
    for (j = 0; j <= i; j++)
    {
      if (j == 0 || i == 0)
        coef = 1;
      else
        coef = coef * (i - j + 1) / j;
      printf("%d ", coef);
    }
    printf("\n");
  }
  return 0;
}