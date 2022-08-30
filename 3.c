#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    temp = a + b;
    a = temp - a;
    b = temp - a;
    printf("a = %d b = %d",a,b);

    return 0;

}