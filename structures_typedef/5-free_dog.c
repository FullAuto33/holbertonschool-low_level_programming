#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - remove space for dog
 * @d: ptr
 * Return: ptr
 */

void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}
