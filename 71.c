#include<stdio.h>
int main()
{
int rev=0,t;
char d;
printf("enter the string:");
scanf("%s",&d);
t=d;
while(t!='\0')
{
rev=rev*10;
rev=rev+t%10;
t=t/10;
}
if(d==rev)
{
printf("it is a palindrome");
}
else
{
printf("it is not a palindrome");
}
return 0;
}
