#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - struct of dog.
 * @name: dog is name.
 * @owner: dog is owner
 * @age: dog is age.
 *
 * Description: Define type struct dog with the following elements.
 */
struct dog
{
char *name;
char *owner;
float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
