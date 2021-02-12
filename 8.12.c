#include <stdio.h>

int main()
{
    char A[1000];
    int i = 0, a = 0;

    while (scanf("%c", &A[i]) == 1)
    {
        if (A[i] == '\n')
            break;

        if (A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'L' || A[i] == 'N' || A[i] == 'O' || A[i] == 'R' || A[i] == 'S' || A[i] == 'T' || A[i] == 'U')
            
        a = a + 1;
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'l' || A[i] == 'n' || A[i] == 'o' || A[i] == 'r' || A[i] == 's' || A[i] == 't' || A[i] == 'u')

        a = a + 1;
        if (A[i] == 'D' || A[i] == 'G')
            a = a + 2;
        if (A[i] == 'd' || A[i] == 'g')
            a = a + 2;
        if (A[i] == 'B' || A[i] == 'C' || A[i] == 'M' || A[i] == 'P')
            a = a + 3;
        if (A[i] == 'b' || A[i] == 'c' || A[i] == 'm' || A[i] == 'p')
            a = a + 3;
        if (A[i] == 'F' || A[i] == 'W' || A[i] == 'V' || A[i] == 'H' || A[i] == 'Y')
            a = a + 4;
        if (A[i] == 'f' || A[i] == 'w' || A[i] == 'v' || A[i] == 'h' || A[i] == 'y')
            a = a + 4;
        if (A[i] == 'K')
            a = a + 5;
        if (A[i] == 'k')
            a = a + 5;
        if (A[i] == 'J' || A[i] == 'X')
            a = a + 8;
        if (A[i] == 'j' || A[i] == 'x')
            a = a + 8;
        if (A[i] == 'Q' || A[i] == 'Z')
            a = a + 10;
        if (A[i] == 'q' || A[i] == 'z')
            a = a + 10;
    }

    printf("%d", a);
}