#include <stdio.h>
int function(int arr[], int n);
int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int result = function(arr, n);
  printf("%d",result);
  return 0;
}
int function(int arr[], int n)
{
  int countOdd = 0, countEven = 0, i;
  for (i = 0; i < n; i++)
  {
    if (arr[i] % 2 == 0)
    {
      countEven++;
    }
    else
    {
      countOdd++;
    }
  }
  if (countOdd > countEven)
  {
    for (i = 0; i < n; i++)
    {
      if (arr[i] % 2 == 0)
      {
        return i + 1;
      }
    }
  }
  else
  {
    for (i = 0; i < n; i++)
    {
      if (arr[i] % 2 != 0)
      {
        return i + 1;
      }
    }
  }
}