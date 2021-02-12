#include <stdio.h>

void main()
{
    int hour, min;

    printf("Enter a 24-Hour time : ");
    scanf("%d:%d", &hour, &min);

    if (hour >= 24 || min > 59)
        printf("Error: Please check your entries\n");

    else
    {
        if (hour > 12)
            printf("Equivalent 12 hour time : %.2d:%.2d PM\n", (hour - 12), min);

        else
            printf("Equivalent 12 hour time : %.2d:%.2d AM\n", hour, min);
    }
}