#include <stdio.h>

void main()
{
    float n, e = 1, i = 1, a, fact = 1;

    printf("Entr n\n");
    scanf("%f", &n);

    while (1)
    {
        for (a = 1; a <= i; a++)
            fact *= a;

        i++;

        if ((1 / fact) <= n)
            break;

        e += (1 / fact);

        fact = 1;

    }
    
    printf("%f\n", e);
}