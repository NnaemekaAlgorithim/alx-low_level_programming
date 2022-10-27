#include "main.h"

/**
 * _strncpy - function to copy a string
 * @dest: variable to hold copy of string
 * @src: variable to hold string that will be copied
 * @n: variable to hold the limit to which src get copied
 * Return: Always return 0 (success)
 */

char *_strncpy(char *dest, char *src, int n)
{
int index, src_len;
index = src_len = 0;

while (src_len[index++])
src_len++;

for (index = 0; src_len[index] && index < n; index++)
dest[index] = src[index];

for (index = src_len; index < n; index++)
dest[index] = '\0';

return (dest);
}
