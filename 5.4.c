#include <stdio.h>

void main()
{
    int wind_speed;

    printf("This program will estimate the wind force\n\nEnter wind speed (in knots) : ");
    scanf("%d",&wind_speed);

    if (wind_speed < 1)
    printf("Calm\n");

    else if (wind_speed <= 3)
    printf("Light air\n");

    else if (wind_speed <= 27)
    printf("Breeze\n");

    else if (wind_speed <= 47)
    printf("Gale\n");

    else if (wind_speed <= 63)
    printf("Storm\n");

    else if (wind_speed >= 63)
    printf("Hurricane\n");

}