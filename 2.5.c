#include <stdio.h>

int main()
{
float x;
printf("x=");

scanf("%f",&x);

float y;

y=3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;

printf("value of polynomial is %f\n",y);
return 0;
}
