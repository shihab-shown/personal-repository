/* Online Problem
Write a program to read the coordinates (X, Y) of an indeterminate 
number of points in Cartesian system. For each point write the 
quadrant to which it belongs. The program finish when at least 
one of two coordinates is NULL (in this situation without writing any message).
*/
#include <stdio.h>

int main()
{
  int x,y;
  printf("Enter (X,Y)= ");
  scanf("%d %d",&x,&y);
  if(x>0 && y>0)
  {
    printf("First quadrant");
  }
  else if(x<0 && y>0)
  {
    printf("Second quadrant");
  }
  else if(x<0 && y<0)
  {
    printf("Third quadrant");
  }
  else if(x>0 && y<0)
  {
    printf("Fourth quadrant");
  }
  else
  {
    printf("NULL");
  }
return 0;
}