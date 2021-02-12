#include <stdio.h>

void main ()
{
    float a, b, commission, rival_commission;
    printf("Enter number of shares : ");
    scanf("%f",&a);

    printf("Enter value of each share : ");
    scanf("%f",&b);

    if(a*b < 2500.00)
    commission = 30.00 + 0.17*a*b;

    else if(a*b < 6250.00)
    commission = 56.00+0.0066*a*b;

    else if (a*b < 20000.00)
    commission = 76.00 + 0.0034*a*b;

    else if (a*b < 50000.00)
    commission = 100.00 + 0.0022*a*b;

    else if (a*b < 500000.00)
    commission = 155.00 + 0.0011*a*b;

    else 
    commission = 255.00 + 0.0009*a*b;

    if (commission < 39.00)
    commission = 39.00;

    if(a < 2000)
    rival_commission = 33.00 + 0.03*a;

    if(a >= 2000)
    rival_commission = 33.00 + 0.02*a;

    printf("Original broker's commission is $%.4f\nRival broker's commission is $%.4f\n",commission,rival_commission);
}