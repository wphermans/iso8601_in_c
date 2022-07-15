#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
    int hours, minutes, seconds, day, month, year;
    time_t now;
    time(&now);
 
    struct tm *local = gmtime(&now);
 
    hours = local->tm_hour;         // get hours since midnight (0-23)
    minutes = local->tm_min;        // get minutes passed after the hour (0-59)
    seconds = local->tm_sec;        // get seconds passed after a minute (0-59)
    
    day = local->tm_mday;           // get day of month (1 to 31)
    month = local->tm_mon + 1;      // get month of year (0 to 11)
    year = local->tm_year + 1900;   // get year since 1900
 
    printf("{Date: %02d-%02d-%d %02d:%02d:%02d}\n", year, month, day, hours, minutes, seconds);
  
  
    return 0;
}