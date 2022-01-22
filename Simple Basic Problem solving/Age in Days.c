/*Online problem
Read an integer value corresponding to a person's age
 (in days) and print it in years, months and days, 
 followed by its respective message “year(s), month(s), day(s)”.
*/

#include <stdio.h>

int main()
{
  int a,day,month,year,b;
  printf("Enter a value\n");
  scanf("%d",&a);

  year=a/365;
  b=a%365;
  day=b%30;
  month=b/30;
    
  printf("%d year(s)\n",year);
  printf("%d month(s)\n",month);
  printf("%d day(s)\n",day);
return 0;
}