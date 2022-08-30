#include<stdio.h>
int main()
{
    int x,y,z,no;
    printf("Enter a number:");
    scanf("%d",&no);
    if(no & 1 == 1)
    {
        printf("Odd",no);
    }
    else
    {
        printf("Even",no);
    }

    
    
    
    return 0;

}