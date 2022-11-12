/*
Input N= 5
*   *
 * *
  *
 * *
*   *
*/
#include <stdio.h>

int main()
{
    int n, row, col;
    printf("Input N= ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        if(row+col==n+1 || row==col)
        {
          printf("*");
        }
        else
        {
          printf(" ");
        }
        printf("\n");
    }

    return 0;
}