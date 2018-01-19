#include<stdio.h>
int main()
{
int f1,f2,rem,i;
printf("given the first num for the range:\n");
scanf("%d",&f1);
printf("given the final number for the range:\n");
scanf("%d"",&f2);
printf("/n the even number between %d&%d are",f1,f2);
for(i=f1;i<=f2;++i)
{
rem=i%2;
if(rem==0)
printf("\n %d",i);
}
return 0;
}
