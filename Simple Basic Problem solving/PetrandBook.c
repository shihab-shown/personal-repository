#include <stdio.h>
int main()
{
  int n, ctr=0;
  scanf("%d",&n);
  int page[7];
  for(int i=0; i<7; i++)
  {
    scanf("%d",&page[i]);
  }
  int j=0;
  while (1)
  {
    n-=page[j];
    if(n<=0){
      break;
    }
    j=(j+1)%7;
  }
  printf("%d",j+1);
  
  return 0;
}