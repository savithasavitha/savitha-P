#include<stdio.h>
int main()
{
int i,a,b,j;
printf("enter the starting range");
scanf("%d",&a);
printf("enter the last range");
scanf("%d",&b);
for(i=a+1;i<b;i++)
{
int prime=1;
for(j=2;j<i/2;j++)
{
if(i%j==0)
{
prime=0;
}
}
if(prime==1)
{
printf("%d",i);
}
}
return 0;
}
