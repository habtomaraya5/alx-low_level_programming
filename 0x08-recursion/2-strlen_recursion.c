#include "main.h"

/**
 *_strlen_recursion - returns size of string for all
 *@s: A pointer to the memory.
 *description _strlen_recursion: a function that return size of string for those
 * Return: sizes.
 */
int _strlen_recursion(char *s)
{
int size = 0;
if (*s)
{
size++;
size = size + _strlen_recursion(s + 1);
}
return (size);
}
