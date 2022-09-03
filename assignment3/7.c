#include<stdio.h>
#include<math.h>
int main()
{
    int d,a,b,c;
    float x,y;
    printf("Enter coefficient of x^2,x and constant term\n");
    scanf("%d %d %d",&a,&b,&c);
    d = (b*b) -(4*a*c);

    if(d<0)
    {
        printf("Both roots are imaginary");
    }
    else if(d=0)
    {
        printf("Both roots are equal\n");
        x = (-b)/(2.0*a);

        printf("Root is %f\n",x);
    }
    else if(d>0)
    {
        x = (-b)+(sqrt(d))/(2.0*a);
        y = (-b)-(sqrt(d))/(2.0*a);
        printf("Roots are real and distint\n");
        printf("Roots are %f ,%f\n",x,y);
    }
    return 0;

    

}