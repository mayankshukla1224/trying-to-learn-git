#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter phone number [(xxx) xxx-xxxx] : ");

    scanf("(%d) %d-%d", &a, &b, &c);

    printf("You entered %.3d.%.3d.%.4d\n", a, b, c);

    return 0;
}
