#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

struct contact
{
  char name[30], email[30], phoneNo[20];
}list;

// **** Functions

void choice(int a);
void add_contact();
void list_contact();
void search();
void edit_contact();
void delete_contact();
void ext();
void menu();
void option();
void edit_contact2(char query[30]);
void delete_contact2(char query[30]);

// **** Main Function
int main()
{
  menu();
  return 0;
}
void menu()
{
  int a;
  printf("1. Add New Contact\n2. Search Contact\n3. Edit a Contact\n4. List all Contact\n5. Delete a Contact\n6. Exit program\n\n\nEnter your choice: \n");
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
void option()
{
  printf("\n\n1. Main Menu\t\t0. Exit\n\nEnter your choice: ");
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
  }
}

void choice(int a)
{
  switch (a)
  {
  case 1:
    system("cls");
    add_contact();
    break;
  case 2:
    system("cls");
    search();
    break;
  case 3:
    system("cls");
    edit_contact();
    break;
  case 4:
    system("cls");
    list_contact();
    break;
  case 5:
    system("cls");
    delete_contact();
    break;
  case 6:
    ext();
    break;

  default:
    printf("INVALID CHOICE");
    break;
  }
}
void add_contact()
{
  FILE *fptr;
  fptr = fopen("Contact.txt","a");
  printf("\tAdd New Contact\n");
  printf("=================================\n\n");
  printf("Name: ");
  scanf(" ");
  fgets(list.name,30,stdin);
  list.name[strlen(list.name)-1]='\0';
  printf("Email Address: ");
  fgets(list.email,30,stdin);
  list.email[strlen(list.email)-1]='\0';
  printf("Phone No: ");
  fgets(list.phoneNo,20,stdin);
  list.phoneNo[strlen(list.phoneNo)-1]='\0';
  fprintf(fptr,"%s %s %s\n",list.name,list.email,list.phoneNo);
  fclose(fptr);
  printf("\nContact added successfully.");
  option();
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
  fclose(fptr);
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
      add_contact();
      break;
    default:
      printf("INVALID CHOICE");
      break;
    }
  }
  option();
}

void search()
{
  FILE *fptr;
  fptr=fopen("Contact.txt","r");
  int a,ctr=0;
  char query[30];
  printf("\tSearch Contact\n");
  printf("=================================\n\n");
  printf("Enter name of a contact: ");
  scanf(" ");
  fgets(query,30,stdin);
  query[strlen(query)-1]='\0';
  printf("Searching ");       // Dot motion
   int i,b;
  for( i=0; i<=3; i++)

  {
    Sleep(300);
    printf(".");
  }
  system("cls");
  while (fscanf(fptr,"%s %s %s",list.name,list.email,list.phoneNo)!=EOF)
  {
    if(stricmp(query,list.name)==0)
    {
      printf("***Match Found***\n\n");
      printf("Name: %s\nEmail address: %s\nPhone No: %s\n",list.name,list.email,list.phoneNo);
      printf("\n1. Edit Contact\t\t2. Delete Contact\t\t3. Menu\t\t4. Exit\n");
      printf("enter your choice: ");
      scanf("%d",&b);
      switch(b)
      {
      case 1:
        fclose(fptr);
        edit_contact2(query);
        break;
      case 2: 
        fclose(fptr);
        delete_contact2(query);
        break;
      case 3:
        system("cls");
        menu();
        break;
      case 4:
        ext();
      default:
        printf("Invalid Input");
        break;

      }
      ctr++;
    }
  }
  if(ctr==0)
  {
    printf("***No Match Found***");
  }
  option();
}
void edit_contact2(char query[30])
{
  FILE *fptr, *ftmp;
  int ctr=0;
  fptr=fopen("Contact.txt","r+");
  ftmp=fopen("temp.txt","a");
  printf("\tEdit Contact\n");
  printf("=================================\n\n");
  while (fscanf(fptr,"%s %s %s",list.name,list.email,list.phoneNo)!=EOF)
  {
    if(stricmp(query,list.name)==0)
    {
      printf("Name: ");
      scanf(" ");
      fgets(list.name,30,stdin);
      list.name[strlen(list.name)-1]='\0';
      printf("Email Address: ");
      fgets(list.email,30,stdin);
      list.email[strlen(list.email)-1]='\0';
      printf("Phone No: ");
      fgets(list.phoneNo,20,stdin);
      list.phoneNo[strlen(list.phoneNo)-1]='\0';
      fprintf(ftmp,"%s %s %s\n",list.name,list.email,list.phoneNo);
      ctr++;
    }
    else
    {
      fprintf(ftmp,"%s %s %s\n",list.name,list.email,list.phoneNo);
    }
  }


    printf("\n\nContact edited successfully");

  fclose(fptr);
  fclose(ftmp);
  remove("Contact.txt");
  rename("temp.txt","Contact.txt");
}

void delete_contact2(char query[30])
{
  FILE *fptr, *ftmp;
  int ctr=0;
  fptr=fopen("Contact.txt","r+");
  ftmp=fopen("temp.txt","a");
  printf("\n");


  while (fscanf(fptr,"%s %s %s",list.name,list.email,list.phoneNo)!=EOF)
  {
    if(stricmp(query,list.name)==0)
    {
      ctr++;
      continue;
    }
    else
    {
      fprintf(ftmp,"%s %s %s\n",list.name,list.email,list.phoneNo);
    }
  }

    printf("\n\nContact deleted successfully");

  fclose(fptr);
  fclose(ftmp);
  remove("Contact.txt");
  rename("temp.txt","Contact.txt");
}


void edit_contact()
{
  FILE *fptr, *ftmp;
  char query[30];
  int ctr=0;
  fptr=fopen("Contact.txt","r+");
  ftmp=fopen("temp.txt","a");
  printf("\tEdit Contact\n");
  printf("=================================\n\n");
  printf("Enter a name to edit: ");
  scanf(" ");
  fgets(query,30,stdin);
  query[strlen(query)-1]='\0';
  while (fscanf(fptr,"%s %s %s",list.name,list.email,list.phoneNo)!=EOF)
  {
    if(stricmp(query,list.name)==0)
    {
      printf("Name: ");
      scanf("");
      fgets(list.name,30,stdin);
      list.name[strlen(list.name)-1]='\0';
      printf("Email Address: ");
      fgets(list.email,30,stdin);
      list.email[strlen(list.email)-1]='\0';
      printf("Phone No: ");
      fgets(list.phoneNo,20,stdin);
      list.phoneNo[strlen(list.phoneNo)-1]='\0';
      fprintf(ftmp,"%s %s %s\n",list.name,list.email,list.phoneNo);
      ctr++;
    }
    else
    {
      fprintf(ftmp,"%s %s %s\n",list.name,list.email,list.phoneNo);
    }
  }
  if(ctr==0)
  {
    printf("\n\nNo Contact found with this name");
  }
  else
  {
    printf("\n\nContact edited successfully");
  }
  fclose(fptr);
  fclose(ftmp);
  remove("Contact.txt");
  rename("temp.txt","Contact.txt");
  option();
}

void delete_contact()
{
  FILE *fptr, *ftmp;
  char query[30];
  int ctr=0;
  fptr=fopen("Contact.txt","r+");
  ftmp=fopen("temp.txt","a");
  printf("\tDelete Contact\n");
  printf("=================================\n\n");
  printf("Enter a name to delete: ");
  scanf(" ");
  fgets(query,30,stdin);
  query[strlen(query)-1]='\0';
  while (fscanf(fptr,"%s %s %s",list.name,list.email,list.phoneNo)!=EOF)
  {
    if(stricmp(query,list.name)==0)
    {
      ctr++;
      continue;
    }
    else
    {
      fprintf(ftmp,"%s %s %s\n",list.name,list.email,list.phoneNo);
    }
  }
  if(ctr==0)
  {
    printf("\n\nNo Contact found with this name");
  }
  else
  {
    printf("\n\nContact deleted successfully");
  }
  fclose(fptr);
  fclose(ftmp);
  remove("Contact.txt");
  rename("temp.txt","Contact.txt");
  option();
}
