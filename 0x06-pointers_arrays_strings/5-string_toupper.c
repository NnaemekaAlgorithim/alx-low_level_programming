#include "main.h"



/**
* string_toupper - function to change strings to upper case
* @str: variable to hold the string.
* Return: Always 0 (success).
*/

char *string_toupper(char *str)
{
int index = 0;
while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
index++;
}
return (str);
}
