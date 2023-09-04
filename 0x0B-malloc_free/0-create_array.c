#include "main.h"
/**
 * *create_array - creates an array of char.
 * @size: size of array.
 * @c: input caracter c.
 *
 * Return: Pointer to the resulting char (pte).
 */
char *create_array(unsigned int size, char c)
{
char *pte = malloc(size);
if (size == 0 || pte == 0)
return (0);
while (size--)
pte[size] = c;
return (pte);
}
