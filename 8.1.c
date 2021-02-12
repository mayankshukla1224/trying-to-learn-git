/*#include <stdio.h>
#include <string.h>

#define N 10

int main()
{
    
    int A[N] = {0};
    int i = 0, digit ,a=0;
    long long int number;
    

    
    scanf("%lld", &number);

    while (number > 0)
    {
        digit =  (number % 10);
        A[digit]++;
        number /= 10;
    }

    

    
    for (i = 0; i < N; i++)
        if (A[i] > 1)
        {
            printf("%d ", i);
            a=1;
        }

    if (a == 0)
       {
           printf("\n");
       }
   return 0;
}*/


#include <stdio.h>
#include <string.h>

int main()
{
    int A[1000];
    int B[10]={0};
    
    for(int i=0; i<1000; i++)
    {
        
        if (scanf("%1d",&A[i]) != EOF)
        {


        int l=A[i];
        B[l]++;
    }
    else
    {
        break;
    }
    
    }

    int a=0;
for (int i = 0; i < 10; i++)
        if (B[i] > 1)
        {
            printf("%d ", i);
            a=1;
        }

    if (a == 0)
       {
           printf("\n");
       }
   return 0;

    
}