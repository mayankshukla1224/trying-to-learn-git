#include <stdio.h>

void main()
{
    float n, max;

    printf("This program will find the maximum of entered number \n\n");
    printf("Enter the number : ");
    scanf("%f", &n);

    max = n;

    while (n > 0)
    {
        if (n > max)
            max = n;

        printf("Enter the number : ");
        scanf("%f", &n);
    }
    printf("maximum of entered number is %f\n", max);
}