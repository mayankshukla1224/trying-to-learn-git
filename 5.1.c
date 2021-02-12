#include <stdio.h>

void main()
{

    int number, i = 1;
    int digits = 0;

    printf("This program calculates the number of digits \n\n");
    printf("Enter a positive number : ");
    scanf("%d", &number);

L1:

    if (number / i != 0)
    {
        i *= 10;
        digits++;
        goto L1;
    }
    printf("The number %d has %d digits\n", number, digits);
}