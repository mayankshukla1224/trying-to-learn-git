#include <stdio.h>

int main()
{
printf("Enter a dollar amount : ");

int a;
scanf("%d",&a);

printf("\n$20 bills : %d\n",a/20);


printf("$10 bills : %d\n",(a%20)/10);


printf("$5 bills  : %d\n",((a%20)%10)/5);


printf("$1 bills  : %d\n",((a%20)%10)%5);

return 0;
}
