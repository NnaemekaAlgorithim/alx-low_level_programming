#include "main.h"
#include <stdlib.h>

/**
* array_range - Creates an array of integers ordered
*               from min to max, inclusive.
* @min: The first value of the array.
* @max: The last value of the array.
* Return: If min > max or the function fails - NULL.
*         Otherwise - a pointer to the newly created array.
*/

int *array_range(int min, int max)
{
void *mem;
char *ptr_copy, *filler;
unsigned int index;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
mem = malloc(new_size);

if (mem == NULL)
return (NULL);

return (mem);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

ptr_copy = ptr;
mem = malloc(sizeof(*ptr_copy) * new_size);

if (mem == NULL)
{
free(ptr);

return (NULL);
}

filler = mem;

for (index = 0; index < old_size && index < new_size; index++)
filler[index] = *ptr_copy++;

free(ptr);

return (mem);

}
