#include <stdio.h>

int main()
{
float x;
printf("x=");

scanf("%f",&x);

float y;

y=((((3*x+2)*x-5)*x-1)*x+7)*x-6;

printf("value of polynomial is %f\n",y);
return 0;
}
