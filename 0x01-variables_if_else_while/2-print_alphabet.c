#include <stdio.h>

/**
 * main - program started
 *
 * Description: main function program
 * by putchar and prints charactor in lowercase
 * Return: is always 0
 */
int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
putchar(x);
putchar('\n');
return (0);
}
