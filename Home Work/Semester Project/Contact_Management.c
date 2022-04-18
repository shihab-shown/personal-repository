#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct info 
{
  char name[30], email[30], address[50], phoneNo[20];
}list;
void choice(int a);
void add();
void ext();
void menu();
int main()
{
  menu();
  return 0;
}
void menu()
{
  int a;
  printf("1. Add New Contact\n");
  printf("2. Search Contact\n");
  printf("3. Edit a Contact\n");
  printf("4. List all Contact\n");
  printf("5. Delete a Contact\n\n\n");
  printf("Enter your choice: \n");
  scanf("%d",&a);
  choice(a);
}
void ext()
{
  int a;
  printf("Are You Sure to Exit the Program\n");
  printf("0. No\t\t1. Yes");
  scanf("%d",&a);
  switch (a)
  {
  case 0:
    menu();
    break;
  case 1:
    exit(1);
    break;
  
  default:
    printf("INVALID CHOICE");
    break;
  }
}
void choice(int a)
{
  switch (a)
  {
  case 1:
    system("cls");
    add();
    break;
  
  default:
    printf("INVALID CHOICE");
    break;
  }

}
void add()
{
  int a;
  FILE *fptr;
  fptr = fopen("Contact.txt","a");
  printf("\tAdd New Contact\n");
  printf("=================================\n\n");
  printf("Name: ");
  getchar( );
  fgets(list.name,30,stdin);
  fprintf(fptr,"Name: %s",list.name);
  printf("Email Address: ");
  getchar( );
  fgets(list.email,30,stdin);
  fprintf(fptr,"Email: %s",list.email);
  printf("Phone No: ");
  getchar( );
  fgets(list.phoneNo,20,stdin);
  fprintf(fptr,"Phone No: +880%s",list.phoneNo);
  printf("\n\n1. Main Menu\t\t0. Exit\n\n");
  printf("Enter your choice: ");
  scanf("%d",&a);
  switch (a)
  {
  case 0:
    ext();
    break;
  case 1:
    system("cls");
    menu();
    break;
  default:
    printf("INVALID CHOICE");
    break;
    fclose(fptr);
  }
}