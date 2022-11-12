/* Online problem
You must make a program that read a float-point number 
and print a message saying in which of following intervals
the number belongs: [0,25] (25,50], (50,75], (75,100]. 
If the read number is less than zero or greather than 100,
the program must print the message "Out of Interval".
*/

#include <stdio.h>

int main()
{
  float a;
  printf("Enter a value\n");
  scanf("%f",&a);

  if(a>=0 && a<=25)
  {
    printf("Interval [0,25]");
  }
  else if(a>25 && a<=50)
  {
    printf("Interval (25,50]");
  }
  else if(a>50 && a<=75)
  {
    printf("Interval (50,75]");
  }
  else if(a>75 && a<=100)
  {
    printf("Interval (75,100]");
  }
  else
  {
    printf("OUT OF INTERVAL");
  }
  
return 0;
}