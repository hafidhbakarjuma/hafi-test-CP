#include <stdio.h>
#include <string.h>

int main ()
{

char name[] = "DeMBa";
// This it change the small alphabet to big
name[1] = 'E';
name[4] = 'A';

printf("%s ", name);


return 0;
}