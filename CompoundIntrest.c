#include<stdio.h>
#include<math.h>
int main()
{
    float principal,rate,time,amount,compoundIntrest;
    printf("entre value of principle");
    scanf("%f",&principal);
    printf("enter value of rate");
    scanf("%f",&rate);
    printf("entre value time");
    scanf("%f",&time);
    amount=principal*pow((1+rate/100),time);
    compoundIntrest=amount-principal;
    printf("compoundIntrest=%2f\n",compoundIntrest);
    printf("total amount=%2f\n",amount);

    return 0;

}