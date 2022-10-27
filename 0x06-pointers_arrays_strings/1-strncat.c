#include "main.h"

/**
 * _strncat - function to concartenate two strings
 * @dest: variable to hold the first string.
 * @src: variable to hold second string.
 * @n: variable to hold limit to impose on the second string.
 * Return: Always 0 (success).
 */

char *_strncat(char *dest, char *src, int n)
{
int index, dest_len;
index = dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];

return (dest);
/*The only difference with the first code is the n condition*/
}
