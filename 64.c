#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("the result is",c);
	if(c%2==0)
	{
		printf("c is even");
	}
	else
	{
		printf("c is odd");
	}
	return 0;
}
