#include <stdio.h>

int main ()

{
// ARRAY WITH FOR LOOP

int grade[4];

grade[0] = 1;
grade[1] = 5;
grade[2] = 10;
grade[3] = 15;

for(int i = 0; i < 4; i++)
{
    printf("grade[%d] = %d\n", i, grade[i]);
}

return 0;

}
