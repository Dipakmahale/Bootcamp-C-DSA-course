#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter theee sides of a triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b>c)&&(a-b<c)&&(c-a<b))
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is invalid!");
    }
    return 0;
}