#include <stdio.h>
#include <string.h>

int main ()
{

char nm[10] = "123456789";
char cp[50];

strcpy(cp, nm);
printf("Original it copy from nm: %s\n", cp);
printf("check the size of nm %zu\n", strlen(cp));

for(int a = 0; a < 10; a++)
{
    printf("%c\n", cp[a]);

}
    return 0;
}