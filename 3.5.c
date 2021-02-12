#include <stdio.h>

int main()
{
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;

printf("Enter the number from 1 to 16 in any order :\n");

scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);

printf("\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n\n\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);

printf("Row sums      : %d\t%d\t%d\t%d\n\n",a+b+c+d,e+f+g+h,i+j+k+l,m+n+o+p);
printf("Column sums   : %d\t%d\t%d\t%d\n\n",a+e+i+m,b+f+j+n,c+g+k+o,d+h+l+p);
printf("Diagonal sums : %d\t%d\n\n",a+f+k+p,d+g+j+m);

return 0;
}
