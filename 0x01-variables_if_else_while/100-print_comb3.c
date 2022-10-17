#include <stdio.h>
#include <stdlib.h>


/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
int i, j;
for (i = '0'; i < '9'; ++i)
{
for (j = i; j <= '8'; j++)
{
putchar(i);
putchar(j + 1);
if (j < '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
