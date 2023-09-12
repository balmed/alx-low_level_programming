#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - That frees dogs.
 * @d: your dog.
 *
 * Return: empty.
 */
void free_dog(dog_t *d)
{
if (d)
{
if (d->name)
free(d->name);
if (d->owner)
free(d->owner);
free(d);
}
}
