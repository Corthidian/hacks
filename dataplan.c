#include <stdio.h>
#include <stdlib.h>

int main(intargc, char*argv[])
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
  






 
