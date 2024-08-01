#include <stdio.h>
#include <string.h>
int main ()
{

char word[60] = "hello, world";
char wd[30] = "jambo";
    // This it copy
    strcpy(wd, word);

printf("WD %s\n", wd);
    return 0;
}