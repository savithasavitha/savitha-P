#include<stdio.h>
#include<math.h>
int main()
{
int a,d,n,i,tn;
int sum=0;
printf("enter the first term value of A.P. series:");
scanf("%d",&a);
printf("enter the total number in A.P. series:");
scanf("%d",&n);
printf("enter the common difference of A.P. series:"):'
scanf("%d",&D);
sum=(n*(2*a+(n-1)*d))/2;
tn=a+(n-1)*d;
printf("sum of the  A.P. series:");'
for(i=a;i<=tn;i=i+d)
{
if(i!=tn)
printf("%d=%ed",i,sum);
}
return 0;
}
