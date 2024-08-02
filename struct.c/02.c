#include <stdio.h>
#include <string.h>

struct player
{
char name [100];
int age;

};

int main ()
{

// This is the another way to use struct 

struct player player1 = {.name = "Messi", .age = 35 };
struct player player2 = {.name = "Ronaldo", .age = 40};

printf("Nmae %s\n", player1.name);
printf("Age %d\n", player1.age);
        printf("\n");
printf("Nmae %s\n", player2.name);
printf("Age %d\n", player2.age);
    return 0;
}