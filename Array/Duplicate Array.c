#include <stdio.h>

int main()
{
  int arr[5],a;
  for(int i=0; i<5; i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0; i<5; i++)
  {
    for(int j=i+1; j<5; j++)
    {
      if(arr[i]==arr[j])
      {
        printf("%d",arr[i]);
      }
    }
  }
return 0;
}