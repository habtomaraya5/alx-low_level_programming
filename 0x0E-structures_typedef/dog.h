#ifndef MAIN_H
#define MAIN_H

/**
 *dog -  creates a structure for dog object for those
 *Description - dog:  is struc type.
 *Description - dog_t:  is struc type for typedef.
 *Return: void.
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
