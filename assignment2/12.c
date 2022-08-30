#include<stdio.h>
int main()
{
    
    float inr;
    printf("Enter Indian Rupees:");
    scanf("%f",&inr);
    inr = (0.013) * inr ;
    printf("%f USD",inr);

    return 0;
}