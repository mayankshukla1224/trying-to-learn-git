#include <stdio.h>

int main()
{
int a,b,c,d,e;

printf("Enter ISBN : ");

scanf("%d-%d-%d-%d-%d",&a,&b,&c,&d,&e);

printf("\nGSI prefix : %d\nGroup identifier : %d\nPublisher code : %d\nItem number : %d\nCheck digit : %d\n",a,b,c,d,e);
return 0;
}