// #include <stdio.h>

// int main()
// {

//   int n, m;
//   printf("Enter N= ");
//   scanf("%d", &n);
//   m = (2 * n) - 1;
//   while (n != 0)
//   {
//     pat(n, m);
//     n--;
//   }

//   printf("\n");

//   return 0;
// }
// int pat(int n, int m)
// {
//   int row, col;
//   for (row = 1; row <= m; row++)
//   {
//     for (col = 1; col <= m; col++)
//     {
//       if (row == 1 || row == m || col == 1 || col == m)
//       {
//         printf("%d ", n);
//       }
//       else
//       {
//         n--;
//         m = (2 * n) - 1;
//         pat(n,m);
//       }
//     }
//     return 0;
//   }
// }
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