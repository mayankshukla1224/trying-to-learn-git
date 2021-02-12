#include <stdio.h>

void main()
{
    float income, tax_amount;

    printf("Enter your income : $");
    scanf("%f", &income);

    if (income < 750)
        tax_amount = 0.01 * income;

    else if (income < 2250)
        tax_amount = 7.50 + 0.03 * (income - 750);

    else if (income < 3750)
        tax_amount = 37.50 + 0.03 * (income - 2250);

    else if (income < 5250)
        tax_amount = 82.50 + 0.04 * (income - 3750);

    else if (income < 7000)
        tax_amount = 142.50 + 0.05 * (income - 5250);

    else
        tax_amount = 230.00 + 0.06 * (income - 7000);

    printf("Tax amount is $%.2f\n", tax_amount);
}