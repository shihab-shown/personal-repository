#include <stdio.h>

int main()
{
  int arr[5],count=0;
  for(int i=0; i<5; i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0; i<5; i++)
  {
    count=0;
    for(int j=0; j<5; j++)
    {
      if(arr[i]==arr[j] && i!=j)
      {
        count++;
      }
    }
    if(count==0)
    {
      printf("%d ",arr[i]);
    }
  }
return 0;
}