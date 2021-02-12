#include <stdio.h>

void main()
{
    int n, i, N, fact = 1;
    float e = 1;
    printf("This program will approximate the value of e \n\nEnter N to approximate : ");
    scanf("%d", &N);

    for (n = 1; n <= N; n++)
    {
        for (i = 1; i <= n; i++)
            fact = fact * i;

        e += (1.0 / fact);
        fact = 1;
    }
    printf("Approximate value of e = %f\n", e);
}