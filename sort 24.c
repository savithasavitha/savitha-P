#include<stdio.h>
#define MAXSIZE 10
void main()
{
int array[MAXSIZE];
int i,j,num,temp;
printf("enter the values of num\n");
scanf("%ed",&num);
printf("enter the element one by one\n");
for(i=0;i<num;i++)
{
scanf("%d",&array[i]);
}
printf("input array is\n");
for(i=0;i<num;i++)
{
printf("%d\n",array[i]);
}
for(i=0;i<num;i++)
{
for(j=o;j<(num-i-1);j++)
{
if(array[j]>array[j+1])
{
temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;
}
}
}
printf("sorted array is ...\n");
for(i=0;i<num;i++)
{
printf("%d\n",array[i]);
}
}
