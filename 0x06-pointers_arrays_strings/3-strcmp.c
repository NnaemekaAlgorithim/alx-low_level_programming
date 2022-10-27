#include "main.h"

/**
 * _strcmp - A function to compare two strings
 * @s1: the variable for the first string
 * @s2: the variable for the second string
 * Return: return the value of the difference.
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
