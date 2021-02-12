#include <stdio.h>

int main()
{
    int a, c, d, e;
    float b;

    printf("Enter item number : ");
    scanf("%d", &a);

    printf("Enter unit price : ");
    scanf("%f", &b);
    if (b > 9999.99)
    {
        printf("Error: Entered amount is larger than expected\n");
        goto end;
    }
    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &c, &d, &e);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%-5d\t\t$ %7.2f\t%.2d/%.2d/%.4d\n", a, b, c, d, e);
end:
    return 0;
}