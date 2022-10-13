#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_dog - a function that prints a variable struct dog.
 *@d: a parameter value.
 *Description - print_dog: print the value of dog.
 *Return: will return nothing at all.
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{
}
else if (d->name == NULL)
{
printf("Name: (nil");
}
else if (d->age == 0)
{
printf("age: (nil");
}
else
{
printf("Name: (%s", d->name);
printf("age: (%f", d->age);
printf("Owner: (%s", d->owner);
}
}
