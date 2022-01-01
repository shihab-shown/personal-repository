/*
Enter N= 5
A A A A A
A       A
A       A
A       A
A A A A A
*/
#include <stdio.h>

int main()
{

    int n, col, row=1;
    printf("Enter N= ");
    scanf("%d", &n);
    for (row=1;row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if (row == 1 || row == n || col == 1 ||  col == n)
            {
                printf("A ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
