#include "main.h"


/**
* reset_to_98 - Entry point
* @a: The variable to take input.
* @b: The variable to take input.
* Return: Always 0 (Success)
*/

void swap_int(int *a, int *b)
{
  int x, y;
  x = *a;
  y = *b;
  *b = x;
  *a = y;
}
