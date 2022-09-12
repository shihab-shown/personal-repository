#include <stdio.h>

    int main()
{
        int a=1,b=2,n1,n2,sum=0;
        printf("Enter n1 and n2\n");
        scanf("%d %d" , &n1 , &n2);

         while(a<=n1 && b<=n2)
        /* for(a=1,b=2 ; a<=n1 && b<=n2; a++ , b++) 
        [Using for loop the mistake I made was 
        "I was usiing ; in the CounterUpdate part"]*/
        
        {
            sum=sum+(a*b);
            a++ ; 
            b++ ;
        }
        printf("SUM is %d",sum);

    return 0;
}