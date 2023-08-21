#include <stdio.h>
int main()
{
  int n,k,a,ctr=0;
  scanf("%d %d",&n, &k);
  while (n--)
  {
    scanf("%d",&a);
    if(a%k==0)ctr++;
  }
  printf("%d",ctr);
  return 0;
}