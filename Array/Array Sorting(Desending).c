// Array sorting >> Desending
#include <stdio.h>

int main()
{
  int arr[6],tmp;
  for(int i=0; i<6; i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0; i<6; i++)
  {
    for(int j=i+1; j<6; j++)
    {
      if(arr[i]<arr[j])
      {
        tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
      }
    }
  }
  for(int i=0; i<6; i++)
  {
    printf("%d ",arr[i]);
  }
return 0;
}