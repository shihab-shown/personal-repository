#include <stdio.h>
int main()
{
    char s[1000];
    int i=0;
    FILE *fptr;
    fptr=fopen("Final_3.c","r+");
    if(fptr!=NULL)
    {
        while(fscanf(fptr,"%c",&s[i])!=EOF)
        {
            printf("%c",s[i]);
            i++;
        }
    }
    else
    {
        printf("File doesn't exist");
    }
    fclose(fptr);
}
