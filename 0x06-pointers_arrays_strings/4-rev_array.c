#include "main.h"

/**
 * reverse_array - A function to reverse the array given
 * @a: the variable having the array
 * @n: the variable storing the size of the array
 * Return: it returns void.
 */

void reverse_array(int *a, int n)
{
int tmp[100], count, i;
count = 0;
i = 0;

for (count = (n - 1); count; count--)
{
tmp[i] = a[count];
}

for (i = 0; i < (n - 1); i++)
a[i] = tmp[i];
}
