#include <stdio.h>

enum day {sun = 1, mon = 2, tue = 3, wed = 4, thu = 5, fri = 6, sat = 7};

int main ()
{


enum day today = sat;

if(today == 1 || today == 7)
{
    printf("Today it's weekend day\n");
} else
{
    printf("Today it's weekday\n");
}


    return 0;
}