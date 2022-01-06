//sum of numbers using array
#include <stdio.h>

  int main()
{

    int a[100],i,n,sum=0;
    printf("How many numbers do you want: ");
    scanf("%d",&n);
    for(i=0; i<=n-1; i++)
      {
        scanf("%d",&a[i]);
      }
    for(i=0;i<=n-1;i++)
      {
        sum=sum+a[i];
      }
    
    printf("%d", sum);


  return 0;
}