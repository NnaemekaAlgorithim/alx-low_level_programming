#include "main.h"

/**
 * _puts_recursion - uses recursion to print strings and a new line
 * @s: the string to be printed.
 * Return: returns (0) on success.
 */

void _puts_recursion(char *s)
{
int index;

for (index = 0; s[index] != '\0'; index++)
_putchar(s[index]);

_putchar('\n');
}
