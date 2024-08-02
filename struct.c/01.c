#include <stdio.h>
#include <string.h>

struct student
{

char name [100];
int id;
char phone[30];
};


int main ()
{

// Struct You can Mention a lot of  student's 

struct student student1, student2;


// First student information
        strcpy(student1.name, "Mo juma");
        student1.id = 1;
        strcpy(student1.phone, "0773-6789");
        
            // print for first student
        printf("Student1 Name: %s\n", student1.name);
        printf("Student1 ID: %d\n", student1.id);
        printf("Student1 Phone: %s\n", student1.phone);

        printf("\n");

// Second student information
        strcpy(student2.name, "Bambi No");
        student2.id = 5;
        strcpy(student2.phone,  "2987-4321");
    
            // print for second student
        printf("Student1 Name: %s\n", student2.name);
        printf("Student1 ID: %d\n", student2.id);
        printf("Student1 Phone: %s\n", student2.phone);
        
    return 0;
}
