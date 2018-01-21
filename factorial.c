#include<stdio.h>
int main()
{
int c,n,fact=1;
printf("enter a number to calculatr its factorial\n");
scanf("%d",&n);
for(c=1;c<n;c++)
fact=fact*c;
printf("factorial of %d=%d\n",fact);
return 0;
}
