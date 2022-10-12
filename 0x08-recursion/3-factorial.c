#include "main.h"

/**
 *factorial - returns factorial of given number for all
 *@n: given no.
 *description factorial: returns factorial of given number for those
 * Return: value.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n >= 0 && n <= 1)
return (1);
n *= factorial(n - 1);
return (n);
}
