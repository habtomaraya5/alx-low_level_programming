#includ "main.h"
#include <string.h>


/**
*puts_half(char *str) -> puts function
*
* @str: str parametr
*/
void  puts_half(char *str)
{
int len, i;
len = strlen(str);
for (i = 0; i < len; i += 2)
_putchar(str[i]);
_putchar('\n');
}
