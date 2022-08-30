#include<stdio.h>
int main()
{
    int x,y,z,m;
    int i;
    float f;
    char ch;
    double d;
    x = sizeof(i);
    y = sizeof(f);
    z = sizeof(ch);
    m = sizeof(d);
    printf("%d is the size of int\n",x);
    printf("%d is the size of float\n",y);
    printf("%d is the size of char\n",z);
    printf("%d is the size of double\n",m);


    return 0;
}