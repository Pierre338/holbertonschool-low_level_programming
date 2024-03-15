#include "dog.h"

/**
* init_dog - t
*@d: d
*@name: n
*@age: a
*@owner: o
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
