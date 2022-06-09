// https://www.hackerrank.com/challenges/30-binary-numbers/problem //

#include <stdio.h>
//long long int tobin(int dec);
long long int consecutiveOnes(int n);

int main()
{
  int n;
  scanf("%d", &n);
  //long long int bin = tobin(num);
  long long int r = consecutiveOnes(n);
  //printf("%lld\n", bin);
  printf("%lld", r);
  return 0;
}
long long int consecutiveOnes(int n)
{
  long long int i,max,sum=0,b[n];
  int a[n],j=0;
  b[0]=0;
  for (i = 0; n > 0; i++)
  {
    a[i] = n % 2;
    n = n / 2;
    if(a[i]==1)
     {
      sum++;
     }
     else
     {
      b[j]=sum;
      sum=0;
      j++;
     }
  }
  max=b[0];
  for(int k=1; k<j; k++)
  {
    if(b[k]>max)
    {
      max=b[k];
    }
  }
  if(max>sum)
  {
    return max;
  }
  else
  {
    return sum;
  }
  
  // for (i = i - 1; i >= 0; i--)
  // {
  //   if(a[i]==1)
  //   {
  //     sum++;
  //   }
  //   else
  //   {
  //     sum=0;
  //   }
  // }
  
}
// long long int tobin(int dec)
// {
//   int rem,f=1;
//   long long int sum=0;
//   while (dec!=0)
//   {
//     rem=dec%2;
//     sum=sum+rem*f;
//     f*=10;
//     dec=dec/2;
//   }
//   return sum;
// }

// int consecutiveOnes(long long int bin)
// {
//   long long int rem,res;
//   int sum=0;
//   res=bin;
//   while(res!=0)
//   {
//     rem=res%10;
//     res=res/10;
//     if(rem==1)
//     {
//       sum++;
//     }
//     else
//     {
//       sum=0;
//     }
//   }
//   return sum;
// }