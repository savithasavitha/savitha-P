#include<stdio.h>
in main()
{
int base,exponent;
long long result=1;
printf("eter a base number:");
scanf("%d",&base);
printf("enter an exponent:");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=base;
--exponent;
}
printf("answer=%"d",result);
return 0;
}
