#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct marks
{
  char name[30];
  int roll;
  int mark_chem;
  int mark_maths;
  int mark_phy;
  float avarage;
};
struct marks avg (struct marks a);
int main()
{
  struct marks student[3];
  struct marks x[3];
  for(int i=0; i<3; i++)
  {
    printf("Name student %d: ",i+1);
    fgets(student[i].name,30,stdin);
    printf("Roll student %d: ",i+1);
    scanf("%d",&student[i].roll);
    printf("Mark of chemstry student %d: ",i+1);
    scanf("%d",&student[i].mark_chem);
    printf("Mark of Mathematics student %d: ",i+1);
    scanf("%d",&student[i].mark_maths);
    printf("Mark of physics student %d: ",i+1);
    scanf("%d",&student[i].mark_phy);
    fflush(stdin);  // It would be a problem if fflush is not used
  }
  for(int i=0; i<3; i++)
  {
    x[i] = avg(student[i]);
  }
  for(int i=0; i<3; i++)
  {
    printf("Student name: %s\n",student[i].name);
    printf("Roll: %d\n",student[i].roll);
    printf("Avarage mark: %.2f\n",x[i].avarage);
  }
  return 0;
}
struct marks avg (struct marks a)
{
  struct marks x;
  int sum=a.mark_chem+a.mark_maths+a.mark_phy;
  a.avarage =sum/3.0;
  return a;
}