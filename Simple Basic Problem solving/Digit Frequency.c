// Online problem
// https://www.hackerrank.com/challenges/frequency-of-digits-1/problem?
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  char *s;
  int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
  s = malloc(1024 * sizeof(char)); // <- <- Allocate memory for the input string
  scanf("%[^\n]", s);
  for(int i=0; i<=strlen(s); i++)
  {
    if( *(s+i)== '0')
    {
      count0++;
    }
    else if ( *(s+i)== '1')
    {
      count1++;
    }
    else if ( *(s+i)== '2')
    {
      count2++;
    }
    else if ( *(s+i)== '3')
    {
      count3++;
    }
    else if ( *(s+i)== '4')
    {
      count4++;
    }
    else if ( *(s+i)== '5')
    {
      count5++;
    }
    else if ( *(s+i)== '6')
    {
      count6++;
    }
    else if ( *(s+i)== '7')
    {
      count7++;
    }
    else if ( *(s+i)== '8')
    {
      count8++;
    }
    else if ( *(s+i)== '9')
    {
      count9++;
    }
    
  }
  printf("%d %d %d %d %d %d %d %d %d %d",count0,count1,count2,count3,count4,count5,count6,count7,count8,count9);
  return 0;
}