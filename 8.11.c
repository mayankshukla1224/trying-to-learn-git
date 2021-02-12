#include <stdio.h>
int main()
{
    char A[100];
    int i =0;
    while(scanf("%c",&A[i]) == 1)
    {
        if(A[i] == '\n')
        break;

        
        if(A[i] >= 'A' && A[i] <= 'C')
        A[i] = '2';
        if(A[i] >= 'D' && A[i] <= 'F')
        A[i] = '3';
        if(A[i] >= 'G' && A[i] <= 'I')
        A[i] = '4';
        if(A[i] >= 'J' && A[i] <= 'L')
        A[i] = '5';
        if(A[i] >= 'M' && A[i] <= 'O')
        A[i] = '6';
        if(A[i] >= 'P' && A[i] <= 'S' && A[i] != 'Q')
        A[i] = '7';
        if(A[i] >= 'T' && A[i] <= 'V')
        A[i] = '8';
        if(A[i] >= 'W' && A[i] <= 'Y')
        A[i] = '9';

        i++;
    }

    for(int a =0; a<i; a++)
    printf("%c",A[a]);

    printf("\n");
    return 0;
}