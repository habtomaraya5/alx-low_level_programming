#include "main.h"

/**
 *_puts_recursion - Prints strings for those
 *@s: A pointer to the memory.
 *description _puts_recursion: a function that prints single chars
 * Return: nothing at all.
 */
void _puts_recursion(char *s)
{
if (*(s) != '\0')
{
_putchar(*(s));
if (*(s + 1) == '\0')
{
_putchar('\n');
return;
}
_puts_recursion(s += 1);
}
if (*(s) == '\0')
{
_putchar('\n');
}
}
