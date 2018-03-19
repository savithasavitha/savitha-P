#include <stdio.h>
#include<string.h>
int main() 
{
	char a[55];
	int n,i;
	printf("\nEnter the string: ");
	scanf("%s",&a);
	i=strlen(a);
	if(i%2==0)
	{
		n=i/2;
		a[n]='*';
		a[n-1]='*';
	}
	else
	{
		n=i/2;
		a[n]='*';
	}
	printf("\nThe modulated string is %s.",a);
	return 0;
}
