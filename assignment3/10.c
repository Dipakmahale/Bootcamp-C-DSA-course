#include<stdio.h>
int main()
{
    int cp,sp,profit,loss;
    float profitpercentage,losspercentage;
    printf("Enter cost price and selling price:");
    scanf("%d %d",&cp,&sp);
    if(sp>cp)
    {
        profit=sp-cp;
        profitpercentage=(profit*100)/cp;
        printf("Profit percentage is %f",profitpercentage);
    }
    else
    {
        loss=cp-sp;
        losspercentage=(loss*100)/sp;
        printf("Loss percentage is %f",losspercentage);
    }
    return 0;
}