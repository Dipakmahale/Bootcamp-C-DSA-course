#include<stdio.h>
int main()
{
    int hindi,marathi,english,algebra,science,pm=33;
    printf("Enter marks of subjects:");
    scanf("%d %d %d %d %d",&hindi,&marathi,&english,&algebra,&science);
    if((hindi>=pm) && (marathi>=pm) && (english>=pm) && (algebra>=pm) && (science>=pm))
    {
        printf("Candidate has passed in the examination");
    }
    else
    {
        printf("Candidate has failed in the examination");
    }
    return 0;
}