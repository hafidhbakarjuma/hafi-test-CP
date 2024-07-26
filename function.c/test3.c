#include <stdio.h>


int find(int x, int y)
{

// Function with if statement 
    if (y < x)
    {
        return x;
    } else 
    {
        return y;
    }

   // return (y > x) ? y : x; This is the another way 
   // Function is value is true and false 
}


int main ()
{

int max = find(12, 32);
printf("%d ",max);

    return 0;
}