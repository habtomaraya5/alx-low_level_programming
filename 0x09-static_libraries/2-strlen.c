#include "main.h"
/**
 * _strlen - gives the size of string at all
 *@s: char parameter
 * Return: returns s size for all
 */

int _strlen(char *s)
{
int size = 0;
while (*(s + size) != '\0')
size++;
return (size);
}
