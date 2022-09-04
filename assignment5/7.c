#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i = 1; i <= n; n--)
    {
        printf("%d\n",n*2);
    }
    return 0;
}