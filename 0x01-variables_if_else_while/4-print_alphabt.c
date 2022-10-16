#include <stdio.h>

#include <stdlib.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
if (x == 'e' || x == 'q')

else
putchar(x);
}
putchar('\n');
return (0);
}
