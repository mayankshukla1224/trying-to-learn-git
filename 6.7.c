#include <stdio.h>

void main()
{
    int n, i, odd = 3, square = 1;
    printf("Enter the number of entries to be printed : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, square);

        square += odd;
        odd += 2;
    }
}