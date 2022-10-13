#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup -  str copy to dynamic arrays.
 *@str: sources string array for all.
 *Description: function  copy to dynamic arrays.
 *Return: will return new created char array.
 */
char *_strdup(char *str)
{
int i = 0, size = 0;
char *dest;
while (*(str + size) != '\0')
{
size++;
}
dest = malloc(sizeof(char) * size + 1);
while (i < size)
{
if (dest == NULL)
{
printf("failed to allocate memory\n");
return (NULL);
}
*(dest + i) = *(str + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
