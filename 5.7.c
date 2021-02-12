#include <stdio.h>

void main()
{
    int current_number, d, max, min;
    d = 1;

    printf("Enter four numbers : ");
    scanf("%d", &current_number);

    max = current_number;
    min = current_number;
L1:
    if (d < 4)
    {
        scanf("%d", &current_number);

        if (current_number > max)
            max = current_number;
        if (current_number < min)
            min = current_number;

        d++;
        goto L1;
    }
    printf("max is %d\nmin is %d\n", max, min);
}