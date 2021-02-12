#include <stdio.h>

void main()
{
    int n1, n2, i, GCD;

    printf("enter two numbers : ");
    scanf("%d%d", &n1, &n2);

    if (n1 == 0 && n2 != 0)
        printf("GCD is %d\n", n2);

    if (n2 == 0 && n1 != 0)
        printf("GCD is %d\n", n1);

    if (n1 == 0 && n2 == 0)
        printf("Error\n");
        
    if(n1 != 0 && n2 != 0)
    {
        for (i = 1; i <= n1 && i <= n2; i++)
        {
            if (n1 % i == 0 && n2 % i == 0)
                GCD = i;
        }
        printf("Greastest Common Divisor : %d\n", GCD);
    }
}