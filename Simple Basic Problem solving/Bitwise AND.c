//  https://www.hackerrank.com/challenges/30-bitwise-and/problem

#include <stdio.h>
int bitwise(int n, int k);
int com(int n);
int main()
{
  int a;
  scanf("%d",&a);
  int n[a], k[a];
  for(int i=0; i<a; i++)
  {
    scanf("%d %d",&n[i], &k[i]);
  }
  for(int f=0; f<a; f++)
  {    
    printf("\n%d",bitwise(n[f],k[f]));
  }
  return 0;
}
int bitwise(int n, int k)
{
    int y=com(n);
    int r[y];
    int x=0;
    for(int i=1; i<n; i++)
    {
      for(int j=i+1; j<=n; j++)
      {
        r[x]=i&j;
        x++;
      }
    }
    int max=r[0];
    for(int i=1; i<y; i++)
    {
      if(r[i]>max && r[i]<k)
      {
        max=r[i];
      }
    }
    return max;
}

int com(int n)
{
  int sum=0;
  for(int i=n; i>=2; i=i-3)
  {
    if(i-2==0)
    {
      sum+=(3*(i-2))+1;
    }
    else
    {
      sum+=(3*(i-2));
    }  
  }
  return sum;
}
