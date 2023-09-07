#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: numbre of n bytes.
 *
 * Return: pointer to the allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, size1, size2;
char *ptr;
if (s1 == 0)
return ("");
if (s2 == 0)
return ("");
size1 = strlen(s1);
size2 = strlen(s2);
ptr = malloc(size1 + size2 + n + 1);
if (ptr == 0)
{
return (NULL);
}
for (i = 0 ; i < size1 ; i++)
ptr[i] = s1[i];
for (j = 0 ; j < n ; j++)
{
ptr[i] = s2[j];
i++;
}
ptr[i] = '\0';
return (ptr);
}
