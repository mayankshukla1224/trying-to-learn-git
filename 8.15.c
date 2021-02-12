#include <stdio.h>

int main()
{
    char A[11000];
    int i, shift, index;

    for (i = 0;; i++)
    {
        scanf("%1c", &A[i]);

        if (A[i] == '\n')
            break;
    }

    scanf("%d", &shift);

    for (index = 0; index < i; index++)
    {
        
        if (A[index] >= 'a' && A[index] <= 'z')
        {
            if (A[index] + shift > 'z')
                A[index] = A[index] - 26 + shift;
            else
                A[index] += shift;
        }
    }
    for (int b = 0; b < i; b++)
    {
        printf("%c", A[b]);
    }
    return 0;
}
