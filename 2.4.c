#include <stdio.h>

int main()
{
printf("Enter the amount :");
float amount,x;  //x is tax added amount

scanf("%f",&amount);

x=amount+5.0f/100.0f*amount;

printf("With tax added : $ %.2f\n",x);

return 0;
}
