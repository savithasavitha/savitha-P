#include<stdio.h>
int main()
{
int array[100],minimum,size c, loacation=1;
printf("enter the number of element  in array\n";
scanf("%d",&size);
printf("enter %d integer \n",size);
for(c=0;c<size;c++)
scanf("%d",&array[c]);
minimum=array[0];
for(c=1;c<size;c++)
{
if(array[c]<minimum)
{
minimum=array[c];
lacation=c+1;
}
}
