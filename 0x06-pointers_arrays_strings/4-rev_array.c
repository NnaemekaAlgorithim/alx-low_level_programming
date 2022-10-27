#include "main.h"

/**
 * reverse_array - A function to reverse the array given
 * @a: the variable having the array
 * @n: the variable storing the size of the array
 * Return: it returns void.
 */

void reverse_array(int *a, int n)
{
int tmp, index;

for (index = n - 1; index >= n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
