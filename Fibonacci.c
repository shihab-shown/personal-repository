/* [This code was writen by me]
#include <stdio.h>

int main()
{

    int n, first = 0, second = 1, fibo, count = 0,d;
    printf("input the value of n\n");
    scanf("%d", &n);
    printf("Fibonacci numbers are: %d  %d ",first , second);
    d=n-3;
    while (count <= d)
    {
        if (d <= 1)
        {
            fibo = d;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf(" %d ", fibo);
        count++;
    }
    
    return 0;
}
And this one I wrote watching tutorial

*/
// I was stupid :)  :)
#include <stdio.h>

    int main()
{

        int first=0,second=1,fibo,count=0,n;
        printf("Enter the range\n");
        scanf("%d",&n);
        while(count<n)
        {
            if(count<=1)
            {
                fibo=count;
            }
            else
            {
                fibo=first+second;
                first=second;
                second=fibo;
            }
            printf("  %d  ",fibo);
            count++;
        }

    return 0;
}
