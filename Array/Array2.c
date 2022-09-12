//maximum and minimum number using Array
#include <stdio.h>

  int main()
{

    int a[10],n,i,max=0;
    printf("Enter How many number: ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
      {
        scanf("%d",&a[i]);
      }
    max=max+a[0];
    for(i=1;i<n;i++)
      {
        if(max<a[i])    //Use ">" for minimum number
        {
          max=a[i];
        }
      }
      printf("The Maximum number is %d",max);
      
  return 0;
}