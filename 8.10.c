#include <stdio.h>

void main()
{
    int hour, min, departure_time, arrival_time;

    printf("Enter a time (expressed in hours and minutes, using the 24-hour clock : ");
    scanf("%d:%d", &hour, &min);

    if (hour * 60 + min >= 160.5 && hour * 60 + min < 531.5)
        printf("Closest departure time is 8:00 am , arriving at 10:16am\n");
    else if (hour * 60 + min >= 531.5 && hour * 60 + min < 631)
        printf("Closest departure time is 9:43 am , arriving at 11:52am\n");
    else if (hour * 60 + min >= 631 && hour * 60 + min < 723)
        printf("Closest departure time is 11:19 am , arriving at 1:31 pm\n");
    else if (hour * 60 + min >= 723 && hour * 60 + min < 803.5)
        printf("Closest departure time is 12:47 pm , arriving at 3:00 pm\n");
    else if (hour * 60 + min >= 803.5 && hour * 60 + min < 892.5)
        printf("Closest departure time is 2:00 pm , arriving at 4:08 pm\n");
    else if (hour * 60 + min >= 892.5 && hour * 60 + min < 1042.5)
        printf("Closest departure time is 3:45 pm , arriving at 5:55 pm\n");
    else if (hour * 60 + min >= 1042.5 && hour * 60 + min < 1222.5)
        printf("Closest departure time is 7:00 pm , arriving at 9:20 pm\n");
    else
        printf("Closest departure time is 9:45 pm , arriving at 11:58 pm\n");
}