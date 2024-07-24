#include <stdio.h>
int main ()
{
 // This is the another option

/*int a = 90;
int b = 50;
*/

int a;
int b;

printf("Enter your Number A : ");
scanf("%d", &a);

printf("Enter your Number B: ");
scanf("%d", &b);
if(a == b)
{
    printf("A is equal to B\n");
} else if(a > b)
{
    printf("A is greater than B\n");
} else if (a < b)
{
    printf("A is less than B\n");
}
  else 
  {
    printf("Invalid");
  } 
    return 0;
}