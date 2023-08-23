#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The pointer to destination
 * @src : The pointer to source
 * @n : most numbre of  bytes from @src
 *
 * Return: pointer to the resulting string
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
