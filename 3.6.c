#include <stdio.h>

int main()
{
printf("Enter two fractios separated by a plus sign : ");

int N1,N2,D1,D2,x,y;

scanf("%d/%d+%d/%d",&N1,&D1,&N2,&D2);

x=N1*D2+D1*N2;
y=D1*D2;

printf("The sum is %d/%d\n",x,y);

return 0;
}
