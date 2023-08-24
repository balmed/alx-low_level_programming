#include "main.h"
/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of bytes from src.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (dest[i])
i++;
for (j = 0 ; j < n && src[j] != '\0' ; j++)
dest[i + j] = src[j];
dest[i + j] = '\0';
return (dest);
}
