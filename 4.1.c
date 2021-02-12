#include <stdio.h>

void main()
{
    int number,b,c;
    printf("Enter two digit number : ");
    scanf("%d",&number);

b=number%10;
c=number/10;
 printf("The reversal is : %d\n",10*b+c);
}