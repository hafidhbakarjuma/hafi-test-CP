#include <stdio.h>
#include <stdlib.h>

int main ()
{

//  Memory Allocation
int a = 100;
int* ptr;
//ptr = (int*) malloc(a* sizeof(int)); Malloc memory
ptr =  (int*) calloc(a, sizeof(int)); //Calloc memory

printf("%p\n", ptr);


    return 0;
}