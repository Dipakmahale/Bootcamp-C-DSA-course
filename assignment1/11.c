#include<stdio.h>
int main()
{
    int hh,mm;
    printf("Enter the time");
    scanf("%d:%d",&hh,&mm);
    printf("\"%d:%d\" converted to \"%d Hour and %d Minute\"",hh,mm,hh,mm);

    return 0;
}