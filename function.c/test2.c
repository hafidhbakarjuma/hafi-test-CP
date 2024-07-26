#include <stdio.h>

// This is a Return statement on C
int max (int a)
{
    return a+a+a*a*a-a*a*a;
}

int main ()
{

int a = max(20);
printf("%d ", a);
    return 0;
}