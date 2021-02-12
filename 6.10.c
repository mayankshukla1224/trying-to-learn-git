#include <stdio.h>

void main()
{
    int day, month, year, earlier_date;
    printf("Enter a date(mm/dd/yy): ");
    scanf("%d/%d/%d", &month,&day, &year);

    earlier_date = year * 10000 + month * 100 + day;

    while (1)
    {
        printf("Enter a date : ");
        scanf("%d/%d/%d", &day, &month, &year);
        if (day == 0 || month == 0)
            break;
        if (earlier_date > year * 10000 + month * 100 + day)
            earlier_date = year* 10000 + month * 100 + day;
    }

    day = earlier_date % 100;
    month = (earlier_date / 100) % 100;
    year = earlier_date / 10000;
    printf("%.2d/%.2d/%.2d  is the earliest date\n", month, day, year);
}
