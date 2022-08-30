#include<stdio.h>
int main()
{
    int no,x,y;
    printf("Enter a number:");
    scanf("%d",&no);
    x = no / 10 ;
    y = no % no ;
    printf("Number is %d%d",x,y);

    return 0;
}