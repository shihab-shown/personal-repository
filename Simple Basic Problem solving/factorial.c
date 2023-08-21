#include <stdio.h>

    int main()
{
    int a,i,f=1;
       printf("Enter any number\n");
       scanf("%d",&a);
       for ( i=1; i<=a; i++)
       {
           f=f*i;
       }
        printf("%d\n",f);


    return 0;
}