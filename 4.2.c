#include<stdio.h>

void main()
{
    int number,unit,tens,hundredth;
    printf("Enter the three digit number : ");
    scanf("%d",&number);

    unit = number % 10;
    tens = (number % 100)/10;
    hundredth = number/100;

    printf("Digit reversal is %d\n",100*unit+10*tens+hundredth);
}