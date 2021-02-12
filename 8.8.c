#include <stdio.h>
int main()
{
    float A[5][5] ,max, min;
    int i, j, a = 0;
    

    for (i = 0; i < 5; i++)
    {
        printf("Enter: ");
        for (j = 0; j < 5; j++)
            scanf("%f", &A[i][j]);
    }

    for (i = 0; i < 5; i++)
        printf("%.0f ", A[i][0] + A[i][1] + A[i][2] + A[i][3] + A[i][4]);
    printf("\n");

    for (i = 0; i < 5; i++)
        printf("%.2f ", (A[i][0] + A[i][1] + A[i][2] + A[i][3] + A[i][4]) / 5);
    printf("\n");

    for (i = 0; i < 5; i++)
        printf("%.2f ", (A[0][i] + A[1][i] + A[2][i] + A[3][i] + A[4][i]) / 5);
    printf("\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a == 0)
            {
                max = A[0][i];
                a = 1;
            }
            if (A[j][i] > max)
                max = A[j][i];
        }
        printf("%.0f ", max);
        a=0;
    }
    a=0;
    printf("\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a == 0)
            {
                min = A[0][i];
                a = 2;
            }
            if (min > A[j][i])
                min = A[j][i];
        }
        printf("%.0f ", min);
        a=0;
    }
    printf("\n");
}