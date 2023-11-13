#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: memory area.
 * @src: Source.
 * @n: Bytes from memory area.
 *
 * Return: Pointer to the resulting (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}
return (dest);
}

