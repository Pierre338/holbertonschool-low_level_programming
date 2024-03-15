#include "dog.h"

/**
*free_dog - f
*@d: d
*/
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
