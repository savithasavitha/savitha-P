#include <stdio.h>

int main(void) {
int i,a;
scanf("%d\n",&a);
printf("%d\n",a);
for(i=1;i<=a;i++)
{
if(a%i==0)
{
printf("%d\n",i);
}
}

	return 0;
}
