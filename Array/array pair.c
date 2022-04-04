#include <stdio.h>
int main()
{
  int arr[6],a;
  for(int i=0; i<6; i++)
  {
    scanf("%d",&arr[i]);
  }
  scanf("%d",&a);
  for(int i=0; i<6; i++)
  {
    for(int j=1; j<6; j++)
    {
      if(arr[i]+arr[j]==a)
      {
        printf("Pair of elements can make the given sum by the value of index %d and %d\n",i,j);
        return 0;
      }
    }
  }
  return 0;
}