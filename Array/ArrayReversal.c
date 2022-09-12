#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));    // <- <- Allocate memory for arr. In arr we'll put the numbers.
    for(i = 0; i < num; i++) 
    {                          // <- <- Geting numbers and storing them in memory serially. 
      scanf("%d", arr + i);
    }
    /* Write the logic to reverse the array. */
    for(i = (num-1); i >= 0; i--)    // <- <- printing the value stored in memory in reverse
        printf("%d ", *(arr + i)); 
    return 0;
}