#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x&1)
    {
        printf("%d is odd",x);
    }
    else
    {
        printf("%d is even",x);
    }
    return 0;
}