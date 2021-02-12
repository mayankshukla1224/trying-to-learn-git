#include <stdio.h>
#include <string.h>

int main()
{
    char text[1000],reverse[1000];
    int l,start,i,end,index=0;
    
    printf("Enter text: ");
    gets(text);

    l=strlen(text);

    start = l-3;
    end = l-3;

    while(start >= 0)
    {
        if(text[start] == ' ')
        {
            for(i= start +1; i <= end; i++)
            {
                reverse[index] = text[i];
                index++;
            }
            reverse[index++] = ' ';

            end = start-1;
        }
        start--;
    }

    for(i=0; i<=end; i++)
    {
        reverse[index] = text[i];
        index++;

    }

    reverse[index] = '\0';

    printf("\n%s %c\n",reverse,text[l-1]);
}