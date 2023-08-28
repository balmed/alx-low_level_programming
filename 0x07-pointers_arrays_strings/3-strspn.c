#include "main.h"
/**
 * _strspn - The length of a prefix substring.
 * @s: String.
 * @accept: Bytes.
 *
 * Return: Unisgned to the resulting (i).
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0 ; s[i] != '\0' ; i++)
{
for (j = 0 ; accept[j] != s[i] ; j++)
{
if (accept[j] == '\0')
return (i);
}
}
return (i);
}
