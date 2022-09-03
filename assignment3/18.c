#include<stdio.h>
int main()
{
    int n;
    printf("Enter month number:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d is January",n);
    }
    else if(n==2)
    {
        printf("%d is February",n);
    }
    else if(n==3)
    {
        printf("%d is March",n);
    }
    else if(n==4)
    {
        printf("%d is April",n);
    }
    else if(n==5)
    {
        printf("%d is May",n);
    }
    else if(n==6)
    {
        printf("%d is June",n);
    }
    else if(n==7)
    {
        printf("%d is July",n);
    }
    else if(n==8)
    {
        printf("%d is August",n);
    }
    else if(n==9)
    {
        printf("%d is September",n);
    }
    else if(n==10)
    {
        printf("%d is October",n);
    }
    else if(n==11)
    {
        printf("%d is November",n);
    }
    else if(n==12)
    {
        printf("%d is December",n);
    }
    else
    {
        printf("Enter valid entry!");
    }
    return 0;
}