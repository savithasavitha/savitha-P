#include <stdio.h>
int main()
{
	char a[50];
	scanf("%s",&a);
	if((a=="sunday")||(a=="saturday"))
	{
	printf("\n it is holiday");
	}
	else 
	{
		printf("\nit is not holiday");
	}
	return 0;
	}
