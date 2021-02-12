#include <stdio.h>

int main()
{
    float a, b, c, x, y, z;
    
    printf("Enter amount of loan : ");
    scanf("%f", &a);

    printf("Enter interest rate : ");
    scanf("%f", &b);

    printf("Enter monthly payment : ");
    scanf("%f", &c);

    x = a + (a * b) / 1200 - c;
    printf("\nBalance remaining after first payment : %.2f\n", x);

    y = x + (x * b) / 1200 - c;
    printf("Balance remaining after second payment : %.2f\n", y);

    z = y + (y * b) / 1200 - c;
    printf("Balance remaining after third payment : %.2f\n", z);
    return 0;
}
