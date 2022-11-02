#include "main.h"

/**
* _pow_recursion - uses recursion to print strings and a new line
* @x: the value to raise its power.
* @y: the power to raise x to
* Return: returns (power of x) on success.
*/

int _pow_recursion(int x, int y)
{

if (y < 0)
return (-1);

if (y == 0)
return (1);

if (y)
x *= _pow_recursion(x, (y - 1));
return (x);    

}
