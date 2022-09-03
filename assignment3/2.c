#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%5==0)
    {
        printf("%d is divisible",x);
    }
    else
    {
        printf("%d is not divisible",x);
    }
    return 0;
}
