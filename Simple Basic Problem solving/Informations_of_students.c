// This is a quiz problem from a different section of CSE115

#include <stdio.h>
int main()
{
  float mark[5],cgpa[5];
  int age[5],i,junior,senior,a,b,c,d;
  char first_letter_Name[5];
  // inputing informations with loop and array        
  for(i=0;i<5;i++)
    {
      printf("Enter the mark of student %d: ",i+1);
      scanf("%f",&mark[i]);
    }
  printf("\n");
  for(i=0;i<5;i++)
    {
      printf("Enter the cgpa of student %d: ",i+1);
      scanf("%f",&cgpa[i]);
    }
    printf("\n");
  for(i=0;i<5;i++)
    {
      printf("Enter the age of student %d: ",i+1);
      scanf("%d",&age[i]);
    }
      printf("\n");
  for(i=0;i<5;i++)
    {
      printf("Enter the first letter of thr name of student %d: ",i+1);
      scanf(" %c",&first_letter_Name[i]);
    }
  // finding which one is junior   
  junior = age[0];
  for (int i=1;i<5;i++)
  {
    if (junior>age[i])
    {
      junior=age[i];                   
    }
  }
  // printing informations of junior student
  printf("\nJunior student:\n");
  for(i=0;i<5;i++)
    {
      if(junior==age[i])
      {
        printf("%.1f \n",mark[i]);
        printf("%.2f \n",cgpa[i]);
        printf("%c",first_letter_Name[i]);
        a=mark[i];
        b=cgpa[i];
      }
    }
  // finding which one is senior  
  senior = age[0];
  for (int i=1; i<5;i++)
  {
    if (senior<age[i])
    {
      senior=age[i];                   
    }
  }
  // printing informations of senior students
  printf("\nSenior student:\n");
  for(i=0;i<5;i++)
    {
      if(senior==age[i])
      {
        printf("%.1f \n",mark[i]);
        printf("%.2f \n",cgpa[i]);
        printf("%c",first_letter_Name[i]);
        c=mark[i];
        d=cgpa[i];
      }
    }
   // printing Sum and avarage of marks and cgpa of junior and senior student 
  printf("Sum of marks is %d\n",a+c);
  printf("Avarage of marks is %.1f\n",(a+c)/2);    
  printf("Sum of cgpa is %.2f\n",b+d);
  printf("Avarage of cgpa is %.2f\n",(b+d)/2);   
return 0;
}