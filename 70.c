#include <stdio.h>

int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int s=1;
	while(s<n)
	{
		s<<=1;
	}
	printf("%d",s);
	return 0;
}
