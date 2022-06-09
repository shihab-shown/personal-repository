// https://www.hackerrank.com/challenges/30-nested-logic/problem //

#include <stdio.h>
int main()
{
  int d1,d2,m1,m2,y1,y2,fine;
  scanf("%d %d %d",&d1,&m1,&y1);
  scanf("%d %d %d",&d2,&m2,&y2);
  if(d1>d2 && m1==m2 && y1==y2)
  {
    fine=15*(d1-d2);
  }
  else if ((d1>=d2 || d1<=d2) && m1>m2 && y1==y2)
  {
    fine=500*(m1-m2);
  }
  else if ((d1>=d2 || d1<=d2) && (m1>=m2 || m1<=m2) && y1>y2)
  {
    fine=10000;
  }
  else
  {
    fine=0;
  }
  printf("%d",fine);
  return 0;
}