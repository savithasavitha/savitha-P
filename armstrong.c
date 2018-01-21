#include<stdio.h>
int main()
{
int num,r,temp;
int sum=0;
printf("enter any number to check armstrong:");
scanf("%D",&num);
temp=num;
while(num!=0)
{
r=num%10;
num=num/10;
sum=sum+(r*r*r);
}
if(sum==temp)
printf("%d is armstrong number",temp);
else
printf("%d" is not armstrong number",temp);
return 0;
}
