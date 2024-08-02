#include <stdio.h>
#include <string.h>

// STRUCT
struct user
{

int phone;
char name[20];    
};

int main ()
{

struct user user1;

strcpy(user1.name, "Demba ba");
user1.phone = 123456879;

printf("Your name is %s\n", user1.name);
printf("Your phone number is %d\n ", user1.phone);

    return 0;
}