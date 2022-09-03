#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a chrarcter:");
    scanf("%c",&ch);
    if(ch>'A' && ch<'Z')
    {
        printf("Character is in uppercase");
    }
    else
    {
        printf("character is in lowercase");
    }
    return 0;
}