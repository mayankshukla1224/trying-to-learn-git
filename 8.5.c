#include <stdio.h>

#define N 100

int main()
{
    double A[5];
    int low_rate, num_years, i,j,year;

    scanf("%d", &low_rate);
    scanf("%d", &num_years);

    printf("Years");
    for (i = 0; i < 5; i++)
    {
        printf("%6d%%", low_rate + i);
        A[i] = N;
    }
    printf("\n");
    
    for (year = 1; year <= num_years; year++)
    {
        printf("%3d    ", year);
        for (i = 0; i < 5; i++)
        {
            for (j = 1; j <= 12; j++)
            {
                A[i] = (A[i] * (double)(1.0 + (low_rate + i) / 1200.0));
            }
            printf("%7.2f", A[i]);
        }
       printf("\n"); 
    }
    return 0;
}