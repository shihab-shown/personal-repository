#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int fib(int n)
{
  if(n==0)
    return 0;
  if(n==1)
    return 1;
  return fib(n-1)+fib(n-2);
}

int factorial(int n)
{
  if(n==0)
    return 1;
  return n*factorial(n-1);
}

int sumOfDigits(int x)
{
  if(x==0)
    return 0;
  return x%10+sumOfDigits(x/10);
}

int DecToBin(int n)
{
  if(n==0)
    return 0;
  return n%2+10*DecToBin(n/2);
}

int findMin(int arr[],int size)
{
  if(size==1)
    return arr[0];
  return min(arr[size-1],findMin(arr,size-1));
}

double sum(int n)
{
  if(n==0)
    return 1;
  return 1.0/pow(2,n)+sum(n-1);
}

int main()
{
  fast
  int a;
  cin>>a;
  cout<<fib(a)<<"\n";
  int b;
  cin>>b;
  cout<<factorial(b)<<"\n";
  int c;
  cin>>c;
  cout<<sumOfDigits(c)<<"\n";
  int arr[5]={1,2,3,4,5};
  cout<<findMin(arr,5)<<"\n";
  int dec;
  cin>>dec;
  cout<<DecToBin(dec)<<"\n";
  int n;
  cin>>n;
  cout<<sum(n)<<"\n";
  return 0;
}