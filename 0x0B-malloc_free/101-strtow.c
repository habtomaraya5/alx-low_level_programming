#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* strtow - splits a string into words
* @s: to be countd
 *Description strtow : in a string for all.
* Return: newly creted dynamic array for all
*/
/**
 * stringwordcount - counts words in a string.
 *Description stringwordcount :  counts words in a string.
 * Return: size of countd word.
 */
int stringwordcount(char *s)
{
int i, words = 0;
for (i = 0; s[i]; i++)
{
if (s[i] == 32)
words++;
}
if (i > 0)
words++;
return (words);
}
char **strtow(char *str)
{
char **s;
int i, j, len = 0, len2 = 0;
if (str == NULL || str[0] == '\0')
return (NULL);
len = strlen(str);
if (len == 0)
return (NULL);
s = malloc(sizeof(char *) * (len + 1));
if (s == NULL)
return (NULL);
for (i = 0; i < len; i++)
{
len2 = stringwordcount(*s);
s[i] = malloc(sizeof(char) * (len2 + 1));
if (s[i] == NULL)
{
for (; i >= 0; i--)
free(s[i]);
free(s);
return (NULL);
}
for (j = 0; j < len2; j++)
s[i][j] = str[len++];
s[i][j] = '\0';
}
s[i] = NULL;
return (s);
}
