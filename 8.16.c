#include <stdio.h>

int main()
{
    int A[26] = {0}, B[26] = {0};
    int i = 0, j = 0, x = 0;
    char c, d;

    while (scanf("%c", &c) == 1)
    {
        if (c == '\n')
            break;
        if (c >= 'A' && c <= 'Z')
        {
            i = c - 'A';
            A[i]++;
        }
        else
        {
            i = c - 'a';
            A[i]++;
        }
    }

    

    while (scanf("%c", &d) == 1)
    {
        if (d == '\n')
            break;
        if (d >= 'A' && d <= 'Z')
        {
            j = d - 'A';
            B[j]++;
        }
        else
        {
            j = d - 'a';
            B[j]++;
        }
    }

    

    for (i = 0; i < 26; i++)
    {
        if (A[i] == B[i])
            x++;
    }
    if (x == 26)
        printf("1\n");
    else
    {
        printf("0\n");
    }

    return 0;
}