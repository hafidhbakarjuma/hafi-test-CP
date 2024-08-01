#include <stdio.h>
#include <stdlib.h>

int main ()
{

// Memory with loop
    int a = 10;
int* ptr;
int i;
while(i < a)
{
    ptr = (int*)malloc(a* sizeof(int));
        printf("%d ", i+a);
        printf("%p\n", &i+a);
        i++;
} 


    return 0;
}