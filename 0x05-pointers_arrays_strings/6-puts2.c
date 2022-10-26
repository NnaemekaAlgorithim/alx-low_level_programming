#include "main.h"


/**
* puts2 - prints every other character of a  string to stdout
* @str: string to print
* Return: void
*/

void puts2(char *str)
{
int i = 1;
while (*(str + i))
{
_putchar(*(str + i));
i++;
i++;
}
_putchar('\n');
}
