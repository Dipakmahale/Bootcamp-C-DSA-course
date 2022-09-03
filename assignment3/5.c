#include<stdio.h>
int main()
{
    int no,x,y,z,m;
    printf("Enter a number:");
    scanf("%d",&no);
    m = no / 100;
    x = no / 10;
    y = x % 10;
    z = no % 10;
    if(m*100 && y*10 && z)
    {
        printf("%d is three digit number",no);
    }
    else
    {
        printf("%d is not three digit number",no);
    }
    return 0;
}