#include<stdio.h>
int main()
{
    int x,y,no,digit;
    printf("Enter a number");
    scanf("%d",&no);
    printf("Enter a digit:");
    scanf("%d",&digit);
    x = no ;
    y = digit ;
    printf("Number is %d%d",x,y);

    return 0;
}