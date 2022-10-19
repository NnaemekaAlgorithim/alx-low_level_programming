#include "main.h"
#include <unistd.h>


/**
* int _abs - Entry point
* @c: The character to take input.
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately
*/


int _abs(int c)
{

if (c < 0)
{
c = (-1) * c;
}

return (c);

}
