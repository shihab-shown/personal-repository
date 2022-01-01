/*
Input N= 5
*
* *
*   *
*     *
* * * * *
*/
#include <stdio.h>

int main()
{
    int n, row, col;
    printf("Input N= ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        if(col==1 || row==n || col==row)
        {
          printf("* ");
        }
        else
        {
          printf("  ");
        }
        
            
        printf("\n");
    }

    return 0;
}
