#include <stdio.h>
#include <string.h>

int main ()
{

//This is a Variable 
int a;

// This is a string 
char b[20];
//This is how to write your name on C
 
printf("What is your name? ");
fgets(b, 20, stdin);
printf("How old are you? ");
scanf("%d", &a);

printf("Your name is %s\n", b);
printf("Your age is %d\n", a);

    return 0;
}