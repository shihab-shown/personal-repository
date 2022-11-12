// https://www.hackerrank.com/challenges/30-operators/problem?

#include <stdio.h>
int roundNo(double num)
{                            //  -> -> Function for rounding number to its nearest integer
  return num < 0 ? num - 0.5 : num + 0.5;
}
int main()
{
  double meal_cost;
  double tip_percentage, tax_parcentage,total_cost,r;
  scanf("%lf\n%lf\n%lf",&meal_cost,&tip_percentage,&tax_parcentage);
  total_cost=meal_cost+(meal_cost*(tip_percentage/100.000))+(meal_cost*(tax_parcentage/100.000));

  printf("%d",roundNo(total_cost));
return 0;
}