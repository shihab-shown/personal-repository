// https://www.hackerrank.com/challenges/30-2d-arrays/problem //

#include <stdio.h>
int main()
{
  int A[10][10];
  int sum[20]={0};
  int k=0,l=0;
  for(int i=0; i<6; i++)
  {
    for(int j=0; j<6; j++)
    {
      scanf("%d",&A[i][j]);
    }
  }
  int m=0;
    while(m<4){
    for(int i=0; i<4; i++)
    {
      for(int j=l; j<l+3; j++)
      {
        sum[k]+=A[i][j];
      }
      sum[k]+=A[i+1][m+1];
      for(int j=l; j<l+3; j++)
      {
        sum[k]+=A[i+2][j];
      }
      k++;
    }
    l++;
    m++;
  }  
  int max=sum[0];
  for(int i=1; i<16; i++)
  {
    if(sum[i]>max)
    {
      max=sum[i];
    }
  }
  printf("\n\n%d\n\n",max);
  for(int i=0; i<16; i++)
  {
    printf("%d  ",sum[i]);
  }
  return 0;
}