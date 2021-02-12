#include<stdio.h>

void main()
{
int n,i,rev=0;
printf("Enter the number: ");
scanf("%d",&n);
while(n > 0)
{
    if(n%10 == 0)
    printf("0");
    if(n%10 != 0)
    break;
    n=n/10;
}
while(n>0)
{
rev *=10;
rev += n%10;
n /=10; 
}
printf("%d\n",rev);


}