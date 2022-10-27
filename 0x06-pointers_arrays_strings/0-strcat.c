#include "main.h"
#include <stddef.h>

/**
* _strcat - Entry point
* @dest: destination variable
* @src: source variable
* Return: Always 0 (success)
*/

char *_strcat(char *dest, char *src)
{
/*declear index to store conuting in loops*/
/*declear dest_len variable to hold the value of destination length*/
int index, dest_len;
index = dest_len = 0;

/*this while loop loops through dest to get dest length*/
while (dest[index++])
dest_len++;

/*this for loop does appending of the strings while src is not null*/
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];

return (dest);
}
