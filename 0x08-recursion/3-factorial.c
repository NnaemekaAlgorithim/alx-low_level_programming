#include "main.h"

/**
* factorial - uses recursion to print strings and a new line
* @n: the nth factorial to be printed.
* Return: returns (nth fsctorial) on success else (-1).
*/

int factorial(int n)
{

int facto = 0;

if (n < 0)
{
facto = -1;
return (facto);
}

else if (n == 0)
{
facto = 1;
return (facto);
}

facto = (n * factorial(n - 1));

return (facto);

}
