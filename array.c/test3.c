#include <stdio.h>

int main ()

{
// ARRAY WITH FOR LOOP
// You can use this way also
int grade[4] = {100,200,300,400};



for(int i = 0; i < 4; i++)
{
    printf("grade[%d] = %d\n", i, grade[i]);
}

return 0;

}
