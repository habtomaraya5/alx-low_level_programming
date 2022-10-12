#include "main.h"

/**
*_strspn - Gets the length of a pre substring for all.
* @s: The string to be searched.
* @accept: The prefix to be checked.
* Return: The number of bytes in s for all
 */

unsigned int _strspn(char *s, char *accept)                                                                                          
{
unsigned int b = 0;
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
b++;
break;
}
else if (accept[i + 1] == '\0')
return (b);
}
s++;
}
return (b);
}
