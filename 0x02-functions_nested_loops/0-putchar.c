#include "main.h"

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
char x[9] = {'_','p','u','t','c','h','a','r','\0'};
int i;

for (i = 0; i <= 8; i++)
{
_putchar(x[i]);
}
_putchar('\n');

return (0);
}
