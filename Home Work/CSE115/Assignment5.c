#include <stdio.h>
#include <string.h>
struct Account_info
{
  char name[30];
  long long acc_num;
  float balance;
}person[20];

void low_balance_customer();
void special_increment();
int main()
{
  for(int i=0; i<20; i++)
  {
    printf("Enter data for customer %d\n",i+1);
    printf("Name: ");
    scanf(" ");
    fgets(person[i].name,30,stdin);
    person[i].name[strlen(person[i].name)-1]='\0';
    printf("Account No: ");
    scanf("%lld",&person[i].acc_num);
    printf("Balance: ");
    scanf("%f",&person[i].balance);
    printf("\n");
  }
  low_balance_customer();
  special_increment();
  
  FILE *fp;
  fp=fopen("Bank_info.txt","w");
  if(fp!=NULL)
  {
    for(int i=0; i<20; i++)
    {
      fprintf(fp,"Customer's account  No: %lld\nName: %s\nBalance: %.2f\n\n",person[i].acc_num ,person[i].name,person[i].balance);
    }
  }
  fclose(fp);
  return 0;
}

void low_balance_customer()
{
  int a=0;
  printf("\nName of the customers having balance less than $200:\n");
  for(int i=0; i<20; i++)
  {
    if(person[i].balance<200.0)
    {
      printf("%s\n",person[i].name);
      a++;
    }
  }
  if(a==0)
  {
    printf("Nobody have balance less than $200");
  }
}

void special_increment()
{
  int a=0;
  printf("\n\nCustomers who got an increment: \n");
  for(int i=0; i<20; i++)
  {
    if(person[i].balance>1000)
    {
      person[i].balance+=100;
      printf("Name:%s     Balance: %.2f\n",person[i].name,person[i].balance);
      a++;
    }
    
  }
  if(a==0)
  {
    printf("Nobody got an increment");
  }
}
