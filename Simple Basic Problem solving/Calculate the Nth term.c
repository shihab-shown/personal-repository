// https://www.hackerrank.com/challenges/recursion-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) 
{
  int s[n],i;
  s[0]=a;
  s[1]=b;
  s[2]=c;
  for(i=3; i<n; i++)
    {
      s[i]=s[i-1]+s[i-2]+s[i-3];
    }
  int x=s[n-1];
  return x;
}

int main() 
{
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}