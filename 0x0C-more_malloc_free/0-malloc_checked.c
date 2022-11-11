#include "main.h"

/**
 * malloc_checked - a function to allocate memory using malloc
 * @b: the variable to take input
 * Return: return pointer to allocated memory or exit(98) if fail
 */

void *malloc_checked(unsigned int b)
{
void *memo = malloc(b);

if (memo == NULL)
exit(98);

return (memo);
}
