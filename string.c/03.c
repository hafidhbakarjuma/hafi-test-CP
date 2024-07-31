#include <stdio.h>
#include <string.h>

int main ()
{

char food[] = "Pizza";
char bestfood[strlen(food)];
// This it copy text from food to best food
strcpy(bestfood, food);

printf("%s\n", bestfood);

    return 0;
}