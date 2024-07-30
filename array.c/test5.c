#include <stdio.h>

void array(int man[]);

int main ()
{
// ARRAY WITH FUNCTION

int ma [4] = {27,23,45,76};
array(ma);


printf("ma[2] is %d\n", ma[2]);

    return 0;
}

void array(int man[])
{
man[2] = man[2] +1;
}