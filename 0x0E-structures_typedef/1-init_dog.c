#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: dog to initiale.
 * @name: dog is name.
 * @owner: dog is owner
 * @age: dog is age.
 *
 * Return: empty.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->owner = owner;
d->age = age;
}
}
