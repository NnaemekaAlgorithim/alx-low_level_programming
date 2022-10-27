#include "main.h"

/**
 * *_strcat - Entry point
 * @dest: destination variable
 * @src: source variable
 * Return: Always 0 (success)
 */

char *_strcat(char *dest, char *src)
{
//check if pointer are null.
if (dest == NULL) && (src == NULL)
return NULL;

//create a copy of the destination pointer.
char *cpdest = dest;

//find the end of the copied destination pointer
while (cpdest != '\0')
{
//increament the copied untill the end of string
cpdest++;
}

//Append the source string characters untill the null character of the source file
while (*src != '\0')
{
*cpdest++ = *src++;
}

//Append null character at the end
*cpdest = '\0';

//return destination pointer
return dest;
}

