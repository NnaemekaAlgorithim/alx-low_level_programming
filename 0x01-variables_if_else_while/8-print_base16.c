#include<stdio.h>
#include <stdlib.h>



/**
* main - Entry point
* Return: Always 0 (Success)
*/


int main(void)
{
int y, x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
for (y = 'a'; y <= 'f'; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}
