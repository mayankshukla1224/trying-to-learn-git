#include <stdio.h>

int main()
{
    int n, x = 1, i, j;
    scanf("%d", &n);
    int A[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)

            A[i][j] = 0;
    }

    i = 0;
    j = (j / 2);

    while (x != n * n +1)
    {

        A[i][j] = x;

        i = i - 1;
        if (i == -1)
            i = n - 1;

        j = j + 1;
        if (j == n)
            j = 0;

        if (A[i][j] > 0 && A[i][j] <= x)
        {
            if (i == n - 1)
                i = 1;
            else
                i = i + 2;

            if (j == 0)
                j = n - 1;
            else
                j = j - 1;
        }
        x++;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", A[i][j]);

        printf("\n");
    }
    printf("\n");

    return 0;
}