#include "main.h"
#include <unistd.h>


/**
* jack_bauer - Entry point
* Return: On success 0.
* On error, -1 is returned, and errno is set appropriately
*/

void jack_bauer(void)

{
int hour, minute;

for (hour = 0; hour <= 23; hour++)
{

for (minute = 0; minute <= 59; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}

}

}
