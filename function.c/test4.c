#include <stdio.h>

// This is Function Prototype
// You need to mention the argument before the main function
// You need to mention the value inside the main function
// It going to define the function after the main function

void You(int name [], int age);

int main ()
{

int age = 100;
char name [] = "Hafi";

You(name,age);

    return 0;
}
    void You(int name[], int age)
    {

printf("Heloo %s\n", name);
printf("You age is %d\n", age);

}