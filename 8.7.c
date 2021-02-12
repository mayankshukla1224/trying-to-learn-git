#include <stdio.h>

int main()
{
    int A[5][5];
    int i,j;
    printf("Enter 5*5 matrix\n");

    for(i=0; i<5; i++)

    {
        printf("Enter row %d: ",i+1);
        for(j=0; j<5; j++)
        scanf("%d",&A[i][j]);

    }
    for(i=0;i<5; i++)
        printf("%d ",A[i][0]+A[i][1]+A[i][2]+A[i][3]+A[i][4]);
    printf("\n");

    for(i=0; i<5; i++)
    printf("%d ",A[0][i]+A[1][i]+A[2][i]+A[3][i]+A[4][i]);

}