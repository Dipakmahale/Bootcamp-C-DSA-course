#include<stdio.h>
int main()
{
    int x,no;
    printf("Enter a number:");
    scanf("%d",&no);
    x = no % 10;
    printf("Last digit of a number is %d",x);

    return 0; 
}