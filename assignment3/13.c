#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if((n%3==0)&&(n%2==0))
    {
        printf("%d is divisible by 3 and 2",n);
    }
    else
    {
        printf("%d is not divisible by 3 and 2",n);

    }
}