#includ "main.h"

/**
 *puts_half(char *str) -> puts function
 *
 * @str: str parametr
 */
void  puts_half(char *str)
{
int i, l;
for (i = 0; str[i] != '\0'; i++)
if(i % 2 == 0){
for (l = i / 2; str[l] != ''\0; l++)
_putchar(str[l]);
}
else
{
for (l = ((i - 1) / 2) + 1; str[l] != '\0'; l++)
_putchar(str[l]);
}
_putchar('\n');
}
