#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter 2 numbers");
 scanf("%d %d",&a,&b);
 a*=b;
 if(a%2==0)
 {
 printf("it is even");
 }
 else
 {
 printf("its odd");
 }
 return 0;
}
