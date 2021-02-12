#include<stdio.h>

void main()
{
    double amount,interest,payment,installments;

    printf("Enter amount of loan : ");
    scanf("%lf",&amount);

    printf("Enter interest rate : ");
    scanf("%lf",&interest);

    printf("Enter number of of payments : ");
    scanf("%lf",&installments);

    printf("Enter monthly payments : ");
    scanf("%lf",&payment);

    for(int i=1; i<=installments; i++)
    {
        amount = amount+(amount*interest)/1200 - payment;
        printf("Balance remaining after %d payment is $%.2lf\n",i,amount);
    }
}
