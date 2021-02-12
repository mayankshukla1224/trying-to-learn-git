#include<stdio.h>

void main()
{
    int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,sum1,sum2,Check_Digit;

    printf("Enter the 11 digits of a  UPC number : ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8,&x9,&x10,&x11);

    sum1 = x1+x3+x5+x7+x9+x11;
    sum2 = x2+x4+x6+x8+x10;
    Check_Digit = 9-(((sum1*3+sum2)-1)%10);

    printf("Check Digit of UPC is %d\n",Check_Digit);
}