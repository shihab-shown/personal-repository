#include <stdio.h>
int main()
{
  int n,sum1=0,sum2=0,sum3=0;
  scanf("%d",&n);
  int a, b, c;
  for(int i=0; i<n; i++)
  {
    scanf("%d %d %d",&a, &b, &c);
    sum1+=a;
    sum2+=b;
    sum3+=c;
  }
  if(sum1==0 && sum2==0 && sum3==0)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
  return 0;
}