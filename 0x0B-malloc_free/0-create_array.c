#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array -  creates dynamic arrays
 *@size: size of array to be created at this locastion.
 *@c: sources string array.
 *Description: function creates dynamic arrays for this fun
 *Return: will return new created char array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str = malloc(sizeof(char) * size);
if (size == 0)
return (NULL);
for (i = 0; i < size; i++)
{
if (str == NULL)
{
printf("failed to allocate memory\n");
return (NULL);
}
*(str + i) = c;
}
return (str);
}
