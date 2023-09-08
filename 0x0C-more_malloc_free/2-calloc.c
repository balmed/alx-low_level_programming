#include "main.h"
#include <stdlib.h>

/**
 * Mset - fills memory with a constant byte.
 * @s: pointer toput the constant.
 * @b: constant
 * @n: max byte  to use
 *
 * Return: value of s.
 */
void *Mset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n--)
*s++ = b;
return (ptr);
}
/**
 * *_calloc - allocates memory for an array.
 * @nmemb: numbre of array.
 * @size: size of byte.
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *pte;
if (size == 0 || nmemb == 0)
return (NULL);
pte = malloc(nmemb * sizeof(int));
if (pte == 0)
return (NULL);
Mset(pte, 0, nmemb * sizeof(int));
return (pte);
}

