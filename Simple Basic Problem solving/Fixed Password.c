/* Online problem
Write a program that keep reading a password until it is valid. 
For each wrong password read, write the message "Access Denied". 
When the password is typed correctly print the message "Allowed Access" 
and finished the program.
*/
#include <stdio.h>
#include <string.h>                   // string.h for using strcmp()

int main()
{
  char password1[16],password2[16];
  int c,d;
  printf("Set your Password\n");
  scanf("%s",password1);
  printf("Enter your Password\n");
  scanf("%s",password2); 

  c=strcmp(password1,password2);         // strcmp() for comparing two strings

  if(c == 0)
  {
    printf("Allowed Access");
  }
  else
  {
    printf("Access Denied");
  }
return 0;
}