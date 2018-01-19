#include<stdio.h>
int main()
{
int low, high,i,flag;
printf("enter the 2 numbers(interval):");
scanf("%d%d",&low,&high);
printf("prime no between %d&%d are:",low,high);
while(low<high)
{
flag=0;
for(i<2;i<=low/2;++low)
{
if(low%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d",low);
++low;
}
return 0;
}
