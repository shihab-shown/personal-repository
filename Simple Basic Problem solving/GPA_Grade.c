#include <stdio.h>

int main()
{

    float mark;
    printf("Enter your Mark\n");
    scanf("%f",&mark);

    if(mark>=80)
    {
        printf("A+", mark);
    }
    else if(mark>=70)
    {
        printf("A", mark);
    }
    else  if(mark>=60)
    {
        printf("A-", mark);
    }
    else  if(mark>=50)
    {
        printf("B", mark);
    }
    else if(mark>=40)
    {
        printf("C", mark);
    }
    else
    {
        printf("Fail", mark);
    }

    return 0;
}
