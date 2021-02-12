#include<stdio.h>

void main()
{
    int number,x;
    printf("Enter your number : ");
    scanf("%d",&number);

    x=number/10;

    switch(x)
    {
         case 10 : printf("Letter grade : A\n");
        break;
         case 9 : printf("Letter grade :  A\n");
        break;
         case 8 : printf("Letter grade : B\n");
        break;
         case 7 : printf("Letter grade : C\n");
        break;
         case 6 : printf("Letter grade : D\n");
        break;
         case 5 : printf("Letter grade : E\n");
        break;
         case 4 : case 3: case 2: case 1: case 0: 
         default : printf("Letter grade : F\n");
         break;
    }
}