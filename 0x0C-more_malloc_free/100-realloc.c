#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: pointer to the memory allocated malloc: malloc(old_size).
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block.
 *
 * Return: Pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
void *pte;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
pte = malloc(new_size);
if (pte == NULL)
return (NULL);
return (pte);
}
if (new_size > old_size)
{
pte = malloc(new_size);
if (pte == NULL)
return (NULL);
for (i = 0 ; i < old_size && i < new_size ; i++)
*((char *)pte + i) = *((char *)ptr + i);
free(ptr);
}
return (pte);
}
