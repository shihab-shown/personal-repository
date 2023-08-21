#include <stdio.h>
#include <string.h>
 
void checkPalindrome(char [], int);
 
int main()
{
    char wordPal[25];
    printf("Please Input the string: ");
    scanf("%s", wordPal);
    checkPalindrome(wordPal, 0);//call the function for checking Palindorem
 
    return 0;
}
 
void checkPalindrome(char wordPal[], int index)
{
    int len = strlen(wordPal) - (index + 1);
    if (wordPal[index] == wordPal[len])
    {
        if (index + 1 == len || index == len)
        {
            printf("It is palindrome.\n\n");
            return;
        }
        checkPalindrome(wordPal, index + 1);
    }
    else
    {
        printf("It is not a palindrome.\n\n");
    }
}
