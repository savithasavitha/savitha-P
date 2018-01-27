#include <stdio.h>
void main()
{
int a[10];
int j, i,b,t,k;
scanf("%d", &b);
for (j = 0; j <b; j++)
{
scanf("%d", &a[i]);
}
for(j=0;j<b;j++)
{
for(i=j+1;i<b;i++)
{
if(a[j]>a[i])
{
t= a[j];
a[j]=a[i];
a[i]=t;
}
}
}
k=b-2;
{
printf("%d\n",a[k]);
}
}
© 2018 GitHub, Inc.
