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
last_digit = c % 10;
_putchar(last_digit + '0');

return (last_digit);

}
