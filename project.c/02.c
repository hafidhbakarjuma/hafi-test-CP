#include <stdio.h>


int main ()
{

// SWAP

char x = 'X';
char y = 'Y';
char temp;


temp = x;
x = y;
y = temp;


printf("X is = %c\n", x);
printf("Y is = %c ", y);
    return 0;
}