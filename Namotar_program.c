#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);
    for (b = 1; b <= 10; b++)
    {
        printf("%dx%d=%d\n", a, b, a * b);
    }

    return 0;
}