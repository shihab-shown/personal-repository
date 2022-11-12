// Online Problem
// Population increase of a city

#include <stdio.h>

int main()
{
  int PA,PB,year=0;
  double GA,GB,increaseA,increaseB;
  printf("Enter the population of A city: ");
  scanf("%d",&PA);
  printf("Enter the population of B city[Must be bigger than A city]: ");
  scanf("%d",&PB);
  printf("Enter the growth rate of A city: ");
  scanf("%lf",&GA);
  printf("Enter the growth rate of B city[Must be smaller than A city]: ");
  scanf("%lf",&GB);

  if (PA>=PB || GA<GB)
  {
    printf("Try Again");
    return 0;
  }
  else
  {
    while (PA<=PB)
    {
      increaseA=PA*(GA/100.0);
      PA=PA+increaseA;
      increaseB=PB*(GB/100.0);
      PB=PB+increaseB;
      year++;
    }
  } 
  if(year>100)
  {
    printf("More than a century");
  }
  else
  {
    printf("Year= %d",year);
  }
return 0;
}
