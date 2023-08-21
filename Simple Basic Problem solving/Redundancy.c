#include <stdio.h>
#include <string.h>
int main()
{
  int count , s;
    while (scanf("%d ",&s)!= EOF) {
      int a = sizeof(s);
      short visit[a];
      memset(visit,0,a);
      int arr[a];
      for (int i = 0; i < a; i++) {
        if (visit[i] == 1)
          continue;
        count = 1;
        for (int j = i + 1; j < a; j++) {
          if (arr[i] == arr[j]) {
            visit[j] = 1;
            count++;
          }
        }
        printf("%d %d",arr[i],count);
      }
    }
  return 0;
}