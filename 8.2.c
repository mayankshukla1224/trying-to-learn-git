#include <stdio.h>

#define N 10

void main()
{
    int A[N] = {0};
    int i = 0, digit;
    long number;

    printf("Enter a number : ");
    scanf("%ld", &number);

    while (number > 0)
    {
        digit = number % 10;
        A[digit]++;
        number /= 10;
    }

    for (i = 0; i < N; i++)
        printf("%d  ", i);

    printf("\n");

    for (i = 0; i < 10; i++)
        printf("%d  ", A[i]);
        
    printf("\n");
}