#include<stdio.h>
int main()
{
    int no,a,b,c,d;
    printf("Enter three digit number:");
    scanf("%d",&no);
    a = no / 100;
    b = no % 100;
    c = b / 10;
    d = b % 10;
    printf("%d%d%d\n",a,c,d);
    printf("%d%d%d\n",c,a,d);
    printf("%d%d%d\n",c,d,a);
    printf("%d%d%d\n",d,c,a);
    printf("%d%d%d\n",d,a,c);
    printf("%d%d%d\n",a,d,c);
    printf("%d%d%d\n",a,c,d);

    return 0; 
}