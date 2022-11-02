#include "main.h"

/**
* _strlen_recursion - uses recursion to print strings and a new line
* @s: the string length to be printed.
* Return: returns (0) on success.
*/

int _strlen_recursion(char *s)
{
int len = 0;

if (*s)
{
len++;
len += _strlen_recursion(s - 1);
}

return (len);
}
