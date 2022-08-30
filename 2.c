#include<stdio.h>
int main()
{
    int x,no;
    printf("Enter a number:");
    scanf("%d",&no);
    x = no / 10;
    printf("Number without last digit is %d",x);

    return 0;
}