#include <stdio.h>


void main()
{
    char A[100000];
    char c;
    int i = 0;

    printf("Enter text\n");

    while (scanf("%c", &c) == 1)
    {
        if (c == '\n')
        break;

        if (c >= 'a' && c <= 'z')
            c = c - 32;
        A[i] = c;

        if (A[i] == 'A')
            A[i] = 4;
        if (A[i] == 'B')
            A[i] = 8;
        if (A[i] == 'E')
            A[i] = 3;
        if (A[i] == 'I')
            A[i] = 1;
        if (A[i] == 'O')
            A[i] = 0;
        if (A[i] == 'S')
            A[i] = 5;

        i++;
        
        
    }
    for(int b =i; b< i+10;b++)
    A[b]='!';

    for (int a = 0; a < i+10; a++)
    {
        if (A[a] == 0 || A[a] == 1 || A[a] == 3 || A[a] == 4 || A[a] == 5 || A[a] == 8)
            printf("%d", A[a]);
        else
            printf("%c", A[a]);
       
    }
    printf("\n");
}