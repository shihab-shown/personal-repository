#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }
  int max=a[0];
  for(int i=1; i<n; i++)
  {
    if(a[i]>max)
    {
      max=a[i];
    }
  }
  int secondmax=a[0];
  for(int i=1; i<n-1; i++)
  {
    if(a[i]>secondmax && a[i]!=max)
    {
      secondmax=a[i];
    }
  }
  printf("%d",secondmax);
  return 0;
}