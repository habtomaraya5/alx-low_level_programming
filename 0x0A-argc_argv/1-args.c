#include <stdio.h>

/**
 *main - prints its no of arguments
 *@argc: value for those no of arguments.
 *@argv: value for those vector arguments.
 *Description: function program to display number of arguments
 *Return: is always 0
 */

int main(int argc, char *argv[])
{
if (argv[argc - 1] != 0)
{
printf("%d\n", argc - 1);
}
return (0);
}
