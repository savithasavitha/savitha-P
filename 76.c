#include <stdio.h>

int main(void) {
int i,v=6,s=0;
for(i=1;i<=v;i++)
{
	if(v%i==0)
	{
		s++;
	}
}
	if(s!=2)
	{
		printf("composite");
	}
	else
	{
		printf("prime");
	}

	return 0;
}
