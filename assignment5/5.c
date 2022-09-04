#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i = 1; i <= n ; n--)
    {
        printf("%d\n",2*n-1);   
    }
    return 0;
    
}