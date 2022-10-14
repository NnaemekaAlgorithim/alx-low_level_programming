#include <stdio.h>



/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)

{

char charType;
int intType;
long int longInt;
long long int longLongInt;
float floatType;

printf("Size of a char: %zu byte\n", sizeof(charType));
printf("Size of an int: %zu byte\n", sizeof(intType));
printf("Size of a long int: %zu byte\n", sizeof(longInt));
printf("Size of a long long int: %zu byte\n", sizeof(longLongInt));
printf("Size of a float: %zu byte\n", sizeof(floatType));

return (0);

}
