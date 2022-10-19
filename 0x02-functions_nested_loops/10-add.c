#include "main.h"
#include <unistd.h>


/**
* add - Entry point
* @x: The character to take input.
* @y: The character to take input.
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately
*/

int add(int x, int y)
{
int z;
z = x + y;

if (z < 0)
z *= -1;
_putchar(z + '0');

return (z);

}
