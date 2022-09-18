#include <stdio.h>
int main()
{
  int T;
  scanf("%d",&T);
  int secondmax[T];
  for(int p=0; p<T; p++)
  {
    int a[3];
    for(int i=0; i<3; i++)
    {
      scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=1; i<3; i++)
    {
      if(a[i]>max)
      {
        max=a[i];
      }
    }
    secondmax[p]=a[0];
    for(int i=1; i<3; i++)
    {
      if(secondmax[p]==max)
      {
        secondmax[p]=a[i];
        continue;
      }
      else if(a[i]>secondmax[p] && a[i]<max)
      {
        secondmax[p]=a[i];
      }
    }
  }
  for(int i=0; i<T; i++)
  {
    printf("%d\n",secondmax[i]);
  }
  return 0;
}