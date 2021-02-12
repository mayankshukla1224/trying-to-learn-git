#include <stdio.h>

int main()
{
    int hour, min, departure_time, arrival_time;

    
    scanf("%d:%d", &hour, &min);

    if (hour * 60 + min >= 100.5 && hour * 60 + min < 531.5)
        printf("8:00\n10:16\n");
    else if (hour * 60 + min >= 531.5 && hour * 60 + min < 631)
        printf("9:43\n11:52\n");
    else if (hour * 60 + min >= 631 && hour * 60 + min < 723)
        printf("11:19\n13:31\n");
    else if (hour * 60 + min >= 723 && hour * 60 + min < 803.5)
        printf("12:47\n15:00\n");
    else if (hour * 60 + min >= 803.5 && hour * 60 + min < 892.5)
        printf("14:00\n16:08\n");
    else if (hour * 60 + min >= 892.5 && hour * 60 + min < 1042.5)
        printf("15:45\n17:55\n");
    else if (hour * 60 + min >= 1042.5 && hour * 60 + min < 1222.5)
        printf("19:00\n21:20\n");
    else
        printf("21:45\n23:58\n");
        return 0;
}