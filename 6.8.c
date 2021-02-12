#include <stdio.h>

void main()
{
    int i, d, total_days, starting_day;

    printf("Enter number of days in month : ");
    scanf("%d", &total_days);

    printf("Enter starting day of the week (1=sun , 7=sat) : ");
    scanf("%d", &starting_day);

    for (d = 1; d < starting_day; d++)
    {
        printf("   ");
    }

    for (i = 1; i <= total_days; i++)
    {

        printf("%3d", i);
        if ((i + d - 1) % 7 == 0)
            printf("\n");
    }
    printf("\n");
}