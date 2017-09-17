#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter any integer");
scanf("%d%d%d",&a&b&c);
if(a>=b&&a>=c)
{
printf("the integer a is larger");
}
if(b>=a&&b>=c)
{
printf("the integer bis large");
}
if(c>=a&&c>=b)
{
printf("the integer is c is large");
}
return();
}
