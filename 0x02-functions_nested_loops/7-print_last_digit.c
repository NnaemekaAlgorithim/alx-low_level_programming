#include "main.h"
#include <unistd.h>


/**
* print_last_digit - Entry point
* @n: The character to take input.
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately
*/


int print_last_digit(int n)
{
  
int last_digit = n % 10;
  
if (last_digit < 0)
last_digit *= -1;
_putchar(last_digit + '0');
  
return (last_digit);
}
