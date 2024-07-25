#include <stdio.h>

int main ()
{

int a,num1,num2,result;


printf("W E L C O M E\n");
printf("\n");
printf("WHICH OPERATE DO YOU WANT\n");
printf("Press 1 for addition\n");
printf("Press 2 for substraction\n");
printf("Press 3 for multiplication\n");
printf("Press 4 for divided\n");
printf("\n");

printf("CHOOSE NUMBER YOU WANT ");
scanf("%d", &a);

printf("Enter num1\n");
scanf("%d", &num1);
printf("Enter num2\n");
scanf("%d", &num2);

switch (a)
{

case 1: result = num1+num2;
printf("ADDITION IS %d ", result);
break;
case 2: result = num1-num2;
printf("SUBSTRACTION IS %d ", result);
break;
case 3: result = num1*num2;
printf("MULTIPLICATION IS %d ", result);
break;
case 4: result = num1/num2;
printf("DIVIDED IS %d ", result);
break;
default: printf("Wrong number");

}

    return 0;
}