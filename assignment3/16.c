#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if((ch>='A')&&(ch<='Z'))
    {
        printf("%c is uppercase alphabet",ch);
    }
    else if((ch>='a')&&(ch<='z'))
    {
        printf("%c is lowecase alphabet",ch);
    }
    else if((ch>='0')&&(ch<='9'))
    {
        printf("%c is digit",ch);
    }
    else
    {
        printf("%c is special symbol",ch);
    }
    return 0;
}