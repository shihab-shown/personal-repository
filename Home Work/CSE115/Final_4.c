#include <stdio.h>
#include <string.h>
struct st
{
  int id;
  char name[30];
  float cgpa;
};
typedef struct st student;
int main()
{
  student sd[99], temp;
  int a = 0;
  for (int i = 0; i < 100; i++)
  {
    printf("ID: ");
    scanf("%d", &sd[i].id);
    if (sd[i].id == 0)
    {
      break;
    }
    printf("Name: ");
    scanf(" ");
    fgets(sd[i].name, 30, stdin);
    printf("CGPA: ");
    scanf("%f", &sd[i].cgpa);
    a++;
  }
  float max = sd[0].cgpa;
  for (int i = 0; i < a; i++)
  {
    for (int j = i + 1; j < a; j++)
    {
      if (sd[i].cgpa < sd[j].cgpa)
      {
        temp.id = sd[i].id;
        sd[i].id = sd[j].id;
        sd[j].id = temp.id;
        strcpy(temp.name,sd[i].name);
        strcpy(sd[i].name,sd[j].name);
        strcpy(sd[j].name,temp.name);
        temp.cgpa = sd[i].cgpa;
        sd[i].cgpa = sd[j].cgpa;
        sd[j].cgpa = temp.cgpa;
      }
    }
  }
  FILE *fptr;
  fptr = fopen("studentData.txt", "w");
  if (fptr != NULL)
  {
    for (int i = 0; i < a; i++)
    {
      fprintf(fptr, "ID: %d\nName: %sCgpa: %.2f\n", sd[i].id, sd[i].name, sd[i].cgpa);
    }
  }
  else
    printf("File not exist");
  fclose(fptr);
}
