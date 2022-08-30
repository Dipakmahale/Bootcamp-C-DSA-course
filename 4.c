#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the vlaue of a and b:");
    scanf("%d%d",&a,&b);
    b = a + b;
    a = b - a;
    b = b - a;
    printf("a = %d b = %d",a,b);

    return 0;

}