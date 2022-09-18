#include <stdio.h>
void sort(int arr1[], int n);
int main()
{
  int n, a, b, c, ctr=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0; i<n; i++)
  {
    scanf("%d",&arr[i]);
  }
  sort(arr,n);
  for(int i=0; i<n-2; i++)
  {
    //printf("%d",arr[i]);
    a = arr[i];
    b = arr[i+1];
    c = arr[i+2];
    if(a+b>c && b+c>a && a+c>b)
    {
      printf("YES");
      ctr++;
      break;
    }
  }
  if (ctr==0)
  {
    printf("NO");
  }
  return 0;
}
void sort(int arr1[], int n)
{
  int i, j, temp;
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (arr1[j] > arr1[j + 1])
      {
        temp = arr1[j];
        arr1[j] = arr1[j + 1];
        arr1[j + 1] = temp;
      }
    }
  }
  return;
}