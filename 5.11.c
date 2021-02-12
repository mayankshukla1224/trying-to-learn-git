#include <stdio.h>

void main()
{
    int number, x, y;

    printf("Enter a two digit number : ");
    scanf("%d", &number);

    x = number / 10;
    y = number % 10;
    if (number >= 10 && number <= 20)
    {
        if (number == 10)
            printf("Ten\n");
        else if (number == 11)
            printf("Eleven\n");
        else if (number == 12)
            printf("Twelve\n");
        else if (number == 13)
            printf("Thirteen\n");
        else if (number == 14)
            printf("Fourteen\n");
        else if (number == 15)
            printf("Fifteen\n");
        else if (number == 16)
            printf("Sixteen\n");
        else if (number == 17)
            printf("Seventeen\n");
        else if (number == 18)
            printf("Eighteen\n");
        else if (number == 19)
            printf("Nineteen\n");
        else if (number == 20)
            printf("Twenty\n");
    }
    else
    {
        if (x == 9)
            printf("Ninety-");
        else if (x == 8)
            printf("Eighty-");
        else if (x == 7)
            printf("Seventy-");
        else if (x == 6)
            printf("Sixty-");
        else if (x == 5)
            printf("Fifty-");
        else if (x == 4)
            printf("Forty-");
        else if (x == 3)
            printf("Thirty-");
        else if (x == 2)
            printf("Twenty-");

        if (y == 9)
            printf("Nine\n");
        else if (y == 8)
            printf("Eight\n");
        else if (y == 7)
            printf("Seven\n");
        else if (y == 6)
            printf("six\n");
        else if (y == 5)
            printf("five\n");
        else if (y == 4)
            printf("four\n");
        else if (y == 3)
            printf("three\n");
        else if (y == 2)
            printf("two\n");
        else if (y == 1)
            printf("one\n");
    }
}