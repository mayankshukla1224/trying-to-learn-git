#include <stdio.h>
#define N 10

int main()
{
    int A[100][N] = {0};
    int number, digit, a, i, x = 0;
    printf("Enter numbers : ");
    scanf("%d", &number);

    for (a = 0; a < 100; a++)
    {
        while (number > 0)
        {
            digit = number % 10;
            A[a][digit]++;
            number /= 10;
        }
        printf("Enter another number: ");
        scanf("%d", &number);
        if (number == 0)
            break;
    }

    for (int b = 0; b < a + 1; b++)
    {
        for (i = 0; i < N; i++)
        {
            if (A[b][i] > 1)
            {
                printf("Repeated digit\n");
                x = 1;
                break;
            }
        }
        if (x == 0)
            printf("No repeated digit\n");

        x = 0;
    }
    return 0;
}
