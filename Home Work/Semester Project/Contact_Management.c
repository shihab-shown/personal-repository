#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct info 
{
  char name[30], email[30], phoneNo[20];
}list;

// **** Functions

void choice(int a);
void add();
void list_contact();
void ext();
void menu();

// **** Main Function
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
  printf("5. Delete a Contact\n");
  printf("6. Exit program\n\n\n");
  printf("Enter your choice: \n");
  scanf("%d",&a);
  choice(a);
}
void ext()
{
  int a;
  printf("Are You Sure to Exit the Program\n");
  printf("0. No\t\t1. Yes\n");
  scanf("%d",&a);
  switch (a)
  {
  case 0:
    system("cls");
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
  case 4:
    system("cls");
    list_contact();
    break;
  case 6:
    ext();
    break;
  
  default:
    printf("INVALID CHOICE");
    break;
  }

}
void add()
{
  FILE *fptr;
  fptr = fopen("Contact.txt","a");
  printf("\tAdd New Contact\n");
  printf("=================================\n\n");
  printf("Name: ");
  getchar( );
  fgets(list.name,30,stdin);
  list.name[strlen(list.name)-1]='\0';
  // fprintf(fptr,"Name: %s",list.name);
  printf("Email Address: ");
  // getchar( );
  fgets(list.email,30,stdin);
  // fprintf(fptr,"Email: %s",list.email);
  list.email[strlen(list.email)-1]='\0';
  printf("Phone No: ");
  // getchar( );
  fgets(list.phoneNo,20,stdin);
  // fprintf(fptr,"Phone No: +880%s",list.phoneNo);
  list.phoneNo[strlen(list.phoneNo)-1]='\0';
  fprintf(fptr,"%s %s %s\n",list.name,list.email,list.phoneNo);
  printf("\n\n1. Main Menu\t\t0. Exit\n\n");
  printf("Enter your choice: ");
  int a;
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

void list_contact()
{
  int a;
  FILE *fptr;
  fptr=fopen("Contact.txt","r+");
  int ctr=0;
  while (fscanf(fptr,"%s %s %s",list.name,list.email,list.phoneNo)!=EOF)
  {
    printf("Name: %s\nEmail address: %s\nPhone No: %s\n",list.name,list.email,list.phoneNo);
    printf("\n====================================\n\n");
    ctr++;
  }
  if(ctr==0)
  {
    printf("There is no contact.\nDo you want to add a contact?\n");
    printf("0. No\t\t1. Yes\n");
    scanf("%d",&a);
    switch (a)
    {
    case 0:
      system("cls");
      menu();
      break;
    case 1:
      system("cls");
      add();
      break;
    default:
      printf("INVALID CHOICE");
      break;
    }
  }
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
  }
  fclose(fptr);
}