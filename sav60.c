#include<stdio.h>
int main()
{
int a=0,b=1,n=5,c,i;
for(i=0;i<n;i++)
{
printf("%d",a);
c=a+b;
a=b;
b=c;
}
printf("%d",c);
return 0;
}
