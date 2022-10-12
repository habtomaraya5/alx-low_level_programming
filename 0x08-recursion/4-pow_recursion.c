#include "main.h"

/**
 *_pow_recursion - returns power of x and y for all
 *@x: number no.
 *@y: is a power
 *description _pow_recursion: returns x the power of y
 * Return: value for those.
 */
int _pow_recursion(int x, int y)
{
int value = x;
if (y < 0)
return (-1);
else if (y == 0)
return (1);
value *= _pow_recursion(x, y - 1);
return (value);
}
