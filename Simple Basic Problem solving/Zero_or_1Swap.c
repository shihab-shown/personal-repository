#include <stdio.h>
int main()
{
  int n, count=0;
  scanf("%d",&n);
  int p[n];
  for(int i=0; i<n; i++)
  {
    scanf("%d",&p[i]);
  }
  for(int i=0; i<n; i++)
  {
    if(p[i] != (i+1))
    {
      count++;
    }
  }
  if(count<=2)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
  
  return 0;
}