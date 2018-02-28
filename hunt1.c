#include<stdio.h>
int main()
{
int d,i,c;
scanf("%d",&d);
int a[20];
for(i=0;i<d;i++)
{
	scanf("%d",&a[i]);
	
}
for(i=0;i<d;i++)
{
    for(c=i+1;c<d;c++)
{
if(a[i]==a[c])
printf("%d ",a[i]);
}
return 0;
}
}
