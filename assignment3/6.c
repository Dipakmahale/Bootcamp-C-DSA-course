#include<stdio.h>
int main()
{
    int no1,no2;
    printf("Enter two numbers:");
    scanf("%d %d",&no1,&no2);
    if(no1>no2 || no1==no2)
    {
        printf("%d is greater",no1);
    }
    else
    {
        printf("%d is greater",no2);
    }
    
}