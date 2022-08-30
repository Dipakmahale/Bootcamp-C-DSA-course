#include<stdio.h>
int main()
{
    int no,sum,a,b,c,d;
    printf("Enter a three digit number:");
    scanf("%d",&no);
    a = no % 10;
    b = no / 10;
    c = b % 10;
    d = b / 10;
    sum = (a + c + d);
    printf("Sum is %d",sum);

    return 0;
     
}