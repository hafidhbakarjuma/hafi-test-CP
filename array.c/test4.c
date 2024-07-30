#include <stdio.h>

int main ()

{
// ARRAY WITH FOR LOOP
//ARRAY WITH MATH
int grade[5] = {100,200,300,400,500};


int total = 0;
for(int i = 0; i < 5; i++)
 total = total + grade[i];

 int average = total / 5;

 printf("Average is %d\n", average);

return 0;
}