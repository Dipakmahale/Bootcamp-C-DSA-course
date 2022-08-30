#include<stdio.h>
int main()
{
    int x=11111;
    x = (x % 10 == 1);
    printf("Position of first LSB is %d",x);

    return 0;
    
}
