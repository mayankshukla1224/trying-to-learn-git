#include <stdio.h>

void main()
{
    int n1, n2, i, GCD;

    printf("enter fraction : ");
    scanf("%d/%d", &n1, &n2);

    if (n1 == 0 && n2 != 0)
        printf("In lowest term : 0\n");

    if (n2 == 0 && n1 != 0)
        printf("In lowest term : Not defined\n");

    if (n1 == 0 && n2 == 0)
        printf("In lowest term : Not defined\n");

    if (n1 != 0 && n2 != 0)
    {
        for (i = 1; i <= n1 && i <= n2; i++)
        {
            if (n1 % i == 0 && n2 % i == 0)
                GCD = i;
        }
        printf("In lowest term : %d/%d\n", (n1 / GCD), (n2 / GCD));
    }
}