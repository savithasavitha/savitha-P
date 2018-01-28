#include<stdio.h>
#include<math.h>
int main()
{
 int n,num=0;
 printf("enter n");
 scanf("%d",&n);
 while(n!=0)
 { 
    num=(n*10)+(n%10);
    num=n/10;
 }
 while(num!=0)
 {
   switch(num%10)
   {
    case 0:
          printf("zero");
          break;
    case 1:
           printf("one");
           break;
    case 2:
            printf("two");
           break;
    case 3:
            printf("three");
           break;
    case 4:
            printf("four");
           break;
    case 5:
            printf("five");
           break;
    case 6:
            printf("six");
           break;
    case 7:
            printf("seven");
           break;
    case 8:
            printf("one");
           break;
    case 9:
            printf("one");
           break;
      }
      num=num/10;
      }
      return 0;
      }
