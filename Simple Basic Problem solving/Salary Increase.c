/* Online problem
Read the employee's salary, calculate and print the 
new employee's salary, as well the money earned and 
the increase percentual obtained by the employee, 
with corresponding messages in Portuguese, as the below example.
*/
#include <stdio.h>

int main()
{
  float salary,earned,newsalary;
  scanf("%f",&salary); 
if(salary>=0 && salary<=400)
{
  earned=salary*(15.0/100.0);
  newsalary=salary+earned;
  printf("New Salary: %.2f\n",newsalary);
  printf("Money earned: %.2f\n",earned);
  printf("In percentage: 15");
}
else if(salary>=400.01 && salary<=800)
{
  earned=(salary*(12.0/100.0));
  newsalary=salary+earned;
  printf("New Salary: %.2f\n",newsalary);
  printf("Money earned: %.2f\n",earned);
  printf("In percentage: 12");
}
else if(salary>=800.01 && salary<=1200)
{
  earned=salary*(10.0/100.0);
  newsalary=salary+earned;
  printf("New Salary: %.2f\n",newsalary);
  printf("Money earned: %.2f\n",earned);
  printf("In percentage: 10");
}
else if(salary>=1200.01 && salary<=2000)
{
  earned=salary*(7.0/100.0);
  newsalary=salary+earned;
  printf("New Salary: %.2f\n",newsalary);
  printf("Money earned: %.2f\n",earned);
  printf("In percentage: 7");
}
else
{
  earned=salary*(4.0/100.0);
  newsalary=salary+earned;
  printf("New Salary: %.2f\n",newsalary);
  printf("Money earned: %.2f\n",earned);
  printf("In percentage: 4");
}
return 0;
}