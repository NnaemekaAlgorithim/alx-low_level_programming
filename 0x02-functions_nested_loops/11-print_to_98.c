#include "main.h"
#include <unistd.h>
#include <stdio.h>


/**
* print_to_98 - Entry point
* @n: The character to take input.
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately
*/

void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}

else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}

