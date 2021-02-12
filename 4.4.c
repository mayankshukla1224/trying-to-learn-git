#include <stdio.h>

void main()
{
    int a,b,c,d,e,f;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d",&a);

    b=a%8;
    c=(a/8)%8;
    d=((a/8)/8)%8;
    e=(((a/8)/8)/8)%8;
    f=((((a/8)/8)/8)/8)%8;

    printf("In octal, your number is %.5d\n",10000*f+1000*e+100*d+10*c+b);
}