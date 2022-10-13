#include "main.h"

/**
* _strcpy - Copy paste strings for all
* @dest: destination for those
* @src: source
*
* Return: destination at all
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
