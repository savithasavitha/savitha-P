#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("\t %d",a[i]);
}
int large=a[0];
for(i=1;i<n;i++)
{
if(large<a[i])
{
large=a[i];
}
}
printf("\n large number %d",large);
return 0;

}
