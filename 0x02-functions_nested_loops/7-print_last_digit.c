#include "main.h"
#include <unistd.h>


/**
* print_last_digit - Entry point
* @c: The character to take input.
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately
*/


int print_last_digit(int c)
{

int last_digit;
int num;
last_digit = c % 10;
num = (c % 10 + '0');
_putchar(num);

return (last_digit);

}
