#include<stdio.h>
 
int main()
{
      int minutes, hours, total_minutes;
      printf("\nEnter the Time in Hours and Minutes:\n");
      printf("\nHours:\m");
      scanf("%d", &hours);
      printf("\nMinutes:\m");
      scanf("%d", &minutes);
      total_minutes = (hours * 60) + minutes;
      printf("\nTotal Time in Minutes:\t%d\n", total_minutes);
      return 0;
}
