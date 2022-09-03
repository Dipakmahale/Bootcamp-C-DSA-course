#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x<=0)
    {
        printf("Non positive number\n");
    }
    else
    {
        printf("Positive number\n");
    }
    return 0;
}