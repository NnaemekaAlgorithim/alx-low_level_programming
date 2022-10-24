#include "main.h"


/**
* print_rev - Entry point
* @s: The variable to take input.
* Return: Always 0 (Success)
*/


void print_rev(char *s)
{
int i, j;
j = _strlen(s);

for (i = j; s[i] != s[0]; i--)
{
_putchar(str[i]);
}
_putchar('\n');
}
