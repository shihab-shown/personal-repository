/*
Enter the value of N= 5
1
2  3
4  5  6
7  8  9  10
11  12  13  14  15
*/
#include <stdio.h>

int main()
{

  int n, col, row, count = 0;
  printf("Enter the value of N= ");
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= row; col++)
      printf("%d  ", ++count);
    printf("\n");
  }

  return 0;
}