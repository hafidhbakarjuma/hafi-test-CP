#include <stdio.h>
#include <string.h>

int main ()
{
// This it connect together with another string
// STRCAT

char name[20] = "MAMBO ";
char nm[] = "DEMBA ";

strcat(name, nm);

printf("%s\n", name);
    return 0;
}