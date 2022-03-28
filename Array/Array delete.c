#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0; i<n; i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Input the position where to delete:");
  int pos;
  scanf("%d",&pos);
  for(int i=0; i<n; i++)
  {
    if((pos-1)==i)
    {
      for(int j=i; j<n; j++)
      {
        arr[j]=arr[j+1];
      }
    }
  }
  for(int i=0; i<n-1; i++)
  {
    printf("%d  ",arr[i]);
  }
  return 0;
}