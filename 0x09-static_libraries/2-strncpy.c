#include "main.h"

/**
* _strncpy - Copy paste strings for all
* @dest: destination
* @src: source
*
* Return: destination at all
*/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (*(src + i) != '\0' && i < n)
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
