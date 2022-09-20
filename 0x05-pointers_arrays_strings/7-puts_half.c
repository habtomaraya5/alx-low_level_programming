#includ "main.h"
#include <string.h>

/**
* puts2 -> puts function
*
* @str: str parametr
*/
void Puts2(char *str)
{
int len, i;
len = strlen(str);
for (i = 0; i < len; i += 2)
_putchar(str[i]);
_putchar('\n');
}
