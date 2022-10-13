#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 *malloc_checked -  creates dynamic memory for all
 *@b: size of string array.
 *Description: function  creates dynamic arrays
 *Return: will return new created char array to be return
 */

void *malloc_checked(unsigned int b)
{
if (malloc(b) == NULL)
exit(98);
return (malloc(sizeof(unsigned int)));
}
