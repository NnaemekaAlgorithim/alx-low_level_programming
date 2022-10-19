#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
* main - Entry point
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately
*/

int main(void)
{
int i, sum = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}
printf("%d\n", sum);
return (0);
}
