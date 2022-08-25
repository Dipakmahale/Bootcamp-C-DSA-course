#include<stdio.h>
int main()
{
    float a;
    int r;
    printf("Enter radius of circle:");
    scanf("%d",&r);
    a = 3.14 * r * r;
    printf("Area of circle is %f having the radius %d",a,r);

    return 0;
}