#include<stdio.h>
int main()
{
int n,s=0,temp;
scanf("%d",&n);
while(n!=0)
{
temp=n%10;
n=n/10;
s=s+(temp*temp);
}
printf("%d",s);
return 0;
}
