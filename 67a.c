#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
do
{
a++;
}
while(a%10!=0);
printf("the nearest number is %d",a);
return 0;
}
