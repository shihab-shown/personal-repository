#include <stdio.h>

    int main()
{
    char ch;
    printf("Input any Letter\n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("Capital Letter");
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("Small Letter");
    }
    else
    {
        printf("It is not a letter");
    }
    

    return 0;
}