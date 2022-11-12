// #include <stdio.h>
// long long tobin();
// int main()
// {
//   int dec;
//   long long bin;
//   scanf("%d",&dec);
//   bin= tobin(dec);
//   printf("%lld",bin);
// return 0;
// }
// long long tobin(int dec)
// {
//   int rem,f=1;
//   long long sum=0;
//   while (dec!=0)
//   {
//     rem=dec%2;
//     sum=sum+rem*f;
//     f*=10;
//     dec=dec/2;
//   }
//   return sum;
// }
#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int n,i;    
system ("cls");  
printf("Enter the number to convert: ");    
scanf("%d",&n);
int a[n*100];    
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}    
return 0;  
}  