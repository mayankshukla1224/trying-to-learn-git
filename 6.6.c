#include <stdio.h>

void main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    for (int i = 1; (2 * i) * (2 * i) <= num; i++)
        printf("%d\n", 2 * i * 2 * i);
        
}
