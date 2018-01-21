#include<stdio.h>
int main()
{
int array[50],size,i,largest;
printf("\n enter the size of the array:");
scanf("%d",&size);
printf("\n enter the %d element of the array:",size);
for(i=0;i<size;i++)
scanf("%d",&array[i]);
largest=array[0];
for(i=1;i<size;i++)
{
if(largest<array[i])
largest=array[i];
}
printf("\n largest elemment present in the given array:%d",largesr);
return 0;
}
