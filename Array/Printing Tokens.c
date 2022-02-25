#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char *s;
    s = malloc(1024 * sizeof(char)); // <- <- Allocate memory for the input string
    scanf("%[^\n]", s);    // <- <- Input string untill it gets a new line (\n)
    s = realloc(s, strlen(s) + 1);    // <- <- Reallocate the same memory
    //Write your logic to print the tokens of the sentence here.
    char* token = strtok(s, " ");    /* <- <- strtok() is a function that breaks string when it gets a certain character. Here it first get the s string and breaks the string when gets Space character */
      // token := first word by using strtok(s, " ") here delimiter is " "
    while (token)
    {                                     // while token is non-zero, do:
      printf("%s\n", token);             //display token
      token = strtok(NULL, " ");         //token := next token of s, from now pass NULL as first argument of strtok with same delimiter space " ".
    }
    return 0;
}