#include "main.h"

/**
 * _puts_recursion - uses recursion to print strings and a new line
 * @s: the string to be printed.
 * Return: returns (0) on success.
 */

void _puts_recursion(char *s)
{
int index = 0;

if (s[index] == '\0')
return;

_putchar(s[index]);

index++;

_puts_recursion(s[index]);
}
