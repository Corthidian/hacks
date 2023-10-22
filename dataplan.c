#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
if(argc != 4) {
        
printf("ERROR: Invalid number of command-line arguments.\n");
        
printf("Usage: %s <plan_GB> <current_day> <used_GB>\n", argv[0]);

        
return 1;
}

    
double plan_GB = atof(argv[1]);
    
int current_day = atoi(argv[2]);
    
double
used_GB = atof(argv[3]);

    
if
 (plan_GB <= 0|| current_day < 1|| current_day > 30 || used_GB < 0)
 {
        
printf("ERROR: Invalid input values.\n");
        
return 1;
    }

    
int days_remaining = 30 - current_day;
    
double average_daily_use = used_GB / current_day;
    
double remaining_daily_use = (plan_GB - used_GB) / days_remaining;

    
printf("%d days used, %d days remaining\n", current_day, days_remaining);
    
printf("Average daily use: %.3lf GB/day\n", average_daily_use);

    
if
 (average_daily_use > remaining_daily_use) {
        
printf("You are EXCEEDING your average daily use (%.3lf GB/day).\n", remaining_daily_use);
        
printf("Continuing this high usage, you'll exceed your data plan by %.3lf GB.\n", (average_daily_use - remaining_daily_use) * days_remaining);
        
printf("To stay below your data plan, use no more than %.3lf GB/day.\n", remaining_daily_use);
    } 
else if
 (average_daily_use == remaining_daily_use) {
        
printf("You are at or below your average daily use (%.3lf GB/day).\n", remaining_daily_use);
        
printf("You can use up to %.3lf GB/day and stay below your data plan limit.\n", remaining_daily_use);
    } 
else
 {
        
printf("You have already met your limit for this month. Looks like you're getting some overage charges...\n");
    }

    
return 0;
}
  






 
