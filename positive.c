#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n<=0)
{
if(n==0)
{
printf("the number iszero");
}
else 
{
printf("the number is negative");
}
else
{
printf("the number is positive");
}
return 0;
}
